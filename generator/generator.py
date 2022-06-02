import os
from tqdm import tqdm
from service import (
    file_service,
    macro_service,
    available_macro_service,
    used_macro_service
)
from entity import (
    FileEntity,
    MacroEntity,
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

    def generate_used_macro(self):
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
        res: list[UsedMacroEntity] = []
        for file in tqdm(files[:10]):
            file_id = file.file_id
            before_path = file.path
            after_path = file.get_preprocessed_path
            available_macro_list = searching_mapper[file_id] if file_id in searching_mapper else []
            empty_key_macro_list = [macro for macro in available_macro_list if macro[1] == '']
            non_empty_key_macro_list = [macro for macro in available_macro_list if macro[1] != '']
            validate_targets = []
            try:
                with open(before_path, 'r') as before_file:
                    before_lines = [
                        line for line in before_file.readlines()
                        if len(line.strip(' ')) != 0 and line.strip(' ').startswith('#')
                    ]
                    for before_line in before_lines:
                        for (key, value, macro_id) in non_empty_key_macro_list:
                            if key in before_line:
                                validate_targets.append((key, value, macro_id))
                        for (key, _, macro_id) in empty_key_macro_list:
                            if key in before_line:
                                res.append(UsedMacroEntity.from_tuple((-1, macro_id, file_id)))

                with open(after_path, 'r') as after_file:
                    after_lines = [
                        line for line in after_file.readlines()
                        if len(line.strip(' ')) != 0 and line.strip(' ').startswith('#')
                    ]
                    for after_line in after_lines:
                        for (_, value, macro_id) in validate_targets:
                            if value in after_line:
                                res.append(UsedMacroEntity.from_tuple((-1, macro_id, file_id)))

            except Exception:
                pass
        used_macro_service.save(res)


def main():
    generator = UsedMacroGenerator()
    generator.generate_used_macro()


if __name__ == "__main__":
    main()
