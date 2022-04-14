from typing import Tuple
from abc import ABC
import csv
from os.path import exists
import glob
from constant import Constant
from entity import FileEntity, ProjectEntity
from generator.entity import DefineMacroEntity


class DBClient(ABC):
    def __init__(self, table_name: str, columns_name: list[str]):
        self.table_name: str = table_name
        self.columns: list[str] = columns_name

    def insert(self, data: Tuple) -> None:
        assert(len(self.columns) == len(list(data)))

    def fetch(self, target_id: str):
        pass

    def fetch_all(self):
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
            return [row for row in list(reader)]

    @property
    def get_target_path(self):
        """return path to output """
        return Constant.output_root_path + "/" + self.table_name + ".csv"


class LocalFileClient():
    def __init__(self):
        pass

    def file_paths(self, project_path) -> list[str]:
        return list(glob.glob(project_path + "/**/*.[h,c]", recursive=True))

    def read_content(self, file_path) -> list[str]:
        f = open(file_path, "r")
        return list(f.readlines())


project_csv_client = CSVClient("project", ProjectEntity.columns())
file_csv_client = CSVClient("file", FileEntity.columns())
define_macro_client = CSVClient("define_macro", DefineMacroEntity.columns())
local_file_client = LocalFileClient()
