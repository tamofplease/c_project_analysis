import os
from tqdm import tqdm
from service import (
    define_macro_service,
    file_service,
    macro_service,
    available_macro_service,
    used_macro_service
)
from entity import (
    FileEntity,
    MacroEntity,
    DefineMacroEntity,
    AvailableMacroEntity,
    UsedMacroEntity,
)


class UsedMacroGenerator():
    def __init__(self):
        self.file_service = file_service
        self.macro_service = macro_service
        self.available_macro_service = available_macro_service

    def __build_id_macro_mapper(self, macros: list[MacroEntity]):
        return {macro.macro_id: macro for macro in macros}

    def __build_searching_mapper(self, available_macros: list[AvailableMacroEntity], id_macro_mapper):
        res: dict[str, list[tuple[str, str, str]]] = {}
        for available_macro in tqdm(available_macros):
            if available_macro.file_id not in res:
                res[available_macro.file_id] = []
            res[available_macro.file_id].append((
                    id_macro_mapper[available_macro.macro_id].key,
                    id_macro_mapper[available_macro.macro_id].value,
                    available_macro.macro_id
            ))
        return res

    def extract_macros(self):
        files: list[FileEntity] = [
            file for file in self.file_service.fetch_all() if os.path.isfile(file.get_preprocessed_path)
        ]
        macros: list[MacroEntity] = self.macro_service.fetch_all()
        id_macro_mapper = self.__build_id_macro_mapper(macros)
        available_macros: list[AvailableMacroEntity] = self.available_macro_service.fetch_all()
        searching_mapper = self.__build_searching_mapper(
            available_macros=available_macros,
            id_macro_mapper=id_macro_mapper
        )
        res: set[UsedMacroEntity] = set()
        for file in tqdm(files):
            file_id = file.file_id
            before_path = file.path
            after_path = file.get_preprocessed_path
            available_macro_list = searching_mapper[file_id] if file_id in searching_mapper else []
            empty_key_macro_list = [macro for macro in available_macro_list if macro[1] == '']
            non_empty_key_macro_list = [macro for macro in available_macro_list if macro[1] != '']
            validate_targets = set()
            try:
                with open(before_path, 'r') as before_file:
                    before_lines = [
                        line for line in before_file.readlines()
                        if len(line.strip(' ')) != 0 and (not line.strip(' ').startswith('#'))
                    ]
                    for before_line in before_lines:
                        for (key, value, macro_id) in non_empty_key_macro_list:
                            if key in before_line:
                                validate_targets.add((key, value, macro_id))
                        for (key, _, macro_id) in empty_key_macro_list:
                            if key in before_line:
                                res.add((-1, macro_id, file_id))
                with open(after_path, 'r') as after_file:
                    after_lines = [
                        line for line in after_file.readlines()
                        if len(line.strip(' ')) != 0 and (not line.strip(' ').startswith('#'))
                    ]
                    for after_line in after_lines:
                        for (_, value, macro_id) in validate_targets:
                            if value in after_line:
                                res.add((-1, macro_id, file_id))
            except Exception as e:
                print(e)
        used_macro_service.save([UsedMacroEntity.from_tuple(re) for re in res])


class DefineMacroGenerator():
    def __init__(self):
        self.file_service = file_service
        self.macro_service = macro_service
        self.define_macro_service = define_macro_service
        self.macro_map = {entity.key: entity for entity in macro_service.fetch_all()}

    def extract_macros(self):
        data = []
        files: list[FileEntity] = [
            file for file in self.file_service.fetch_all() if os.path.isfile(file.get_preprocessed_path)
        ]
        for file in tqdm(files):
            with open(file.get_formatted_path, mode='r', errors='ignore') as f:
                for line in f.readlines():
                    if '#define' in line:
                        key = line.split(" ")[1]
                        if key in self.macro_map:
                            tgt = self.macro_map[key]
                            data.append(
                                DefineMacroEntity(
                                    define_macro_id=len(data) + 1,
                                    macro_id=tgt.macro_id,
                                    file_id=file.file_id
                                )
                            )
        self.define_macro_service.save(data)


class AvailableMacroGenerator():
    def __init__(self):
        self.file_service = file_service
        self.macro_service = macro_service
        self.available_macro_service = available_macro_service
        self.macro_map = {entity.key: entity for entity in macro_service.fetch_all()}

    def extract_macros(self):
        data = []
        files: list[FileEntity] = [
            file for file in self.file_service.fetch_all() if os.path.isfile(file.get_preprocessed_path)
        ]
        for file in files:
            with open(file.get_available_path, mode='r') as f:
                for line in f.readlines():
                    if '#define' in line:
                        key = line.split(" ")[1]
                        if key in self.macro_map:
                            tgt = self.macro_map[key]
                            data.append(
                                AvailableMacroEntity(
                                    available_macro_id=len(data) + 1,
                                    macro_id=tgt.macro_id,
                                    file_id=file.file_id
                                )
                            )
        self.available_macro_service.save(data)


def main():
    # generator = AvailableMacroGenerator()
    # generator.extract_macros()

    generator = DefineMacroGenerator()
    generator.extract_macros()

    generator = UsedMacroGenerator()
    generator.extract_macros()


if __name__ == "__main__":
    main()
