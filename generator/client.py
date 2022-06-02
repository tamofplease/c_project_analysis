from typing import Tuple
from abc import ABC
import csv
from os.path import exists
import glob
from constant import Constant
from entity import DefineMacroEntity, FileEntity, ProjectEntity
from generator.entity import AvailableMacroEntity, MacroEntity, UsedMacroEntity, WholeMacroEntity
from type import FormatType


class DBClient(ABC):
    def __init__(self, table_name: str, columns_name: list[str]):
        self.table_name: str = table_name
        self.columns: list[str] = columns_name

    def insert(self, data: Tuple) -> None:
        assert(len(self.columns) == len(list(data)))

    def fetch(self, target_id: str):
        pass

    def fetch_all(self) -> list[list[str]]:
        pass


class CSVClient(DBClient):
    def __init__(self, table_name: str, columns_name: list[str]):
        super().__init__(table_name, columns_name)

    def insert(self, data: Tuple):
        super().insert(data)
        target_path = self.get_target_path

        if not exists(target_path):
            with open(target_path, 'w') as output_file:
                writer = csv.writer(output_file)
                writer.writerow(self.columns)
        with open(target_path, 'a') as f_out:
            writer = csv.writer(f_out)
            writer.writerow(data)

    def fetch(self, target_id: str) -> list[str]:
        target_path = self.get_target_path
        with open(target_path, 'r') as f_out:
            reader = csv.reader(f_out)
            for row in reader:
                if row[0] == target_id:
                    return row
        raise Exception("Specific target_id could not found :{}".format(target_id))

    def fetch_all(self) -> list[list[str]]:
        target_path = self.get_target_path
        with open(target_path, 'r') as f_out:
            reader = csv.reader(f_out)
            return [row for row in list(reader)][1:]

    @property
    def get_target_path(self):
        """return path to output """
        return Constant.output_root_path + "/" + self.table_name + ".csv"

    @property
    def get_current_max_id(self):
        return self.fetch_all()[-1][0]


class LocalFileClient():
    def __init__(self):
        pass

    def __check_is_related_with_c(self, target_header_file: str) -> bool:
        target_name = ".".join(target_header_file.split("/")[-1].split(".")[:-1])
        target_dir_path = "/".join(target_header_file.split("/")[:-1])
        same_dir_files = glob.glob(target_dir_path + "/*")
        for file_path in same_dir_files:
            file_name = file_path.split("/")[-1]
            if "." not in file_name:
                continue
            name, ext = ".".join(file_name.split(".")[:-1]), file_name.split(".")[-1]
            if ext in ["cpp", "m", "cc", "S"]:
                return False
            if name == target_name:
                if ext in ["c", "h"]:
                    continue
                return False
        return True

    def exclude_submodules(self, paths: list[str]) -> list[str]:
        dirs = set(['/'.join(path.split('/')[:-1]) for path in paths])
        # submoduleを除外したい
        for dir in dirs:
            files = glob.glob(dir)
            if 'git' in files:
                pass
        return []

    def file_paths(self, project_path) -> list[str]:
        c_files = list(glob.glob(project_path + "/**/*.c", recursive=True))
        h_files = list(glob.glob(project_path + "/**/*.h", recursive=True))
        return c_files + [h_file for h_file in h_files if self.__check_is_related_with_c(h_file)]

    def read_content(self, file_path) -> list[str]:
        f = open(file_path, "r")
        return list(f.readlines())


class ExtractorClient():
    def __init__(self, macro_client: DBClient, available_macro_client: DBClient):
        self.macro_client = macro_client
        self.available_macro_client = available_macro_client

    def extract_define_macros(self, path: str, type: FormatType) -> set[Tuple[str, str]]:
        try:
            if type == FormatType.FORMAT:
                return self.__extract_defined_macros(path)
            if type.get_output_root not in path:
                raise Exception('path must be placed under {} folder'.format(type.get_output_root))
            results: set = set()
            with open(path, 'r', errors='ignore') as open_f:
                lines = open_f.read().splitlines()
                results = results.union({line.replace("\t", " ").strip() for line in lines if '#define' in line})
            return set([
                (result.split(' ')[1].strip(), ' '.join(result.split(' ')[2:]).strip()) for result in results
            ])
        except FileNotFoundError:
            return set()

    def __extract_defined_macros(self, path: str) -> set[Tuple[str, str]]:
        _type = FormatType.FORMAT
        try:
            if _type.get_output_root not in path:
                raise Exception('path must be placed under {} folder'.format(_type.get_output_root))
            results: set = set()
            with open(path, 'r', errors='ignore') as open_f:
                lines = open_f.read().splitlines()
                results = results.union({line.replace("\t", " ").strip() for line in lines if '#define' in line})
            res = set([
                (result.split(' ')[1].strip(), ' '.join(result.split(' ')[2:]).strip()) for result in results
            ])
            return res
        except FileNotFoundError:
            return set()

    def __extract_used_macros(self, path: str) -> set[Tuple[str, str]]:
        _type = FormatType.PREPROCESS

        try:
            if _type.get_output_root not in path:
                raise Exception('path must be placed under {} folder'.format(_type.get_output_root))
            results: set = set()
            with open(path, 'r', errors='ignore') as open_f:
                lines = open_f.read().splitlines()
                results = results.union({line.replace("\t", " ").strip() for line in lines if '#define' in line})
            res = set([
                (result.split(' ')[1].strip(), ' '.join(result.split(' ')[2:]).strip()) for result in results
            ])
            return res
        except FileNotFoundError:
            return set()


project_csv_client = CSVClient(ProjectEntity.table_name, ProjectEntity.columns())
file_csv_client = CSVClient(FileEntity.table_name, FileEntity.columns())
macro_csv_client = CSVClient(MacroEntity.table_name, MacroEntity.columns())
whole_macro_csv_client = CSVClient(WholeMacroEntity.table_name, WholeMacroEntity.columns())
define_macro_csv_client = CSVClient(DefineMacroEntity.table_name, DefineMacroEntity.columns())
available_macro_csv_client = CSVClient(AvailableMacroEntity.table_name, AvailableMacroEntity.columns())
used_macro_csv_client = CSVClient(UsedMacroEntity.table_name, UsedMacroEntity.columns())

local_file_client = LocalFileClient()
