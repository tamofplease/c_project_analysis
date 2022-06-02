from tqdm import tqdm
from service import (
    macro_service,
    available_macro_service
)
from entity import (
    MacroEntity,
    AvailableMacroEntity,
)


class UsedMacroGenerator():
    def __init__(self):
        self.macro_service = macro_service
        self.available_macro_service = available_macro_service

    def __build_id_macro_mapper(self, macros: list[MacroEntity]):
        return {macro.macro_id: macro for macro in macros}

    def __build_searching_mapper(self, available_macros: list[AvailableMacroEntity], id_macro_mapper):
        res: dict[str, list[tuple[str, str]]] = {}
        for available_macro in tqdm(available_macros):
            if available_macro.file_id not in res:
                res[available_macro.file_id] = []
            res[available_macro.file_id].append((
                    id_macro_mapper[available_macro.macro_id].value,
                    available_macro.macro_id
            ))
        return res

    def generate_used_macro(self):
        # files: list[FileEntity]
        macros: list[MacroEntity] = self.macro_service.fetch_all()
        id_macro_mapper = self.__build_id_macro_mapper(macros)
        available_macros: list[AvailableMacroEntity] = self.available_macro_service.fetch_all()
        searching_mapper = self.__build_searching_mapper(
            available_macros=available_macros, 
            id_macro_mapper=id_macro_mapper
        )
        


def main():
    generator = UsedMacroGenerator()
    generator.generate_used_macro()


if __name__ == "__main__":
    main()
