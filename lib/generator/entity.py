from dataclasses import dataclass
from constant import Constant


@dataclass
class ProjectEntity:
    """Entity of Project record"""
    project_id: str
    name: str
    summary: str
    commit_hash: str
    url: str

    table_name = "project"

    @classmethod
    def columns(cls) -> list[str]:
        return ["id", "name", "summary", "commit_hash", "url"]

    @classmethod
    def from_list(cls, data: list[str]):
        assert(len(data) == 5)
        return cls(
            project_id=data[0],
            name=data[1],
            summary=data[2],
            commit_hash=data[3],
            url=data[4]
        )

    @classmethod
    def from_map(cls, data: dict[str, str]):
        return cls(
            project_id=data["project_id"],
            name=data["name"],
            summary=data["summary"],
            commit_hash=data["commit_hash"],
            url=data["url"]
        )

    @property
    def path(self) -> str:
        """function of get project_path"""
        project_root_path = "project/"
        return project_root_path + self.name

    @property
    def to_tuple(self) -> tuple:
        return (self.project_id, self.name, self.summary, self.commit_hash, self.url)

    @property
    def get_project_path(self) -> str:
        return Constant.local_project_root_path + "/" + self.name


@dataclass
class FileEntity:
    """Entity of File record"""
    file_id: str
    name: str
    path: str
    project_id: str

    table_name = "file"

    @classmethod
    def columns(cls):
        return ["file_id", "name", "path", "project_id"]

    @classmethod
    def from_map(cls, data: dict[str, str]):
        return cls(
            file_id=data["file_id"],
            name=data["name"],
            path=data["path"],
            project_id=data["project_id"]
        )

    @property
    def to_tuple(self) -> tuple:
        return (self.file_id, self.name, self.path, self.project_id)

    @classmethod
    def from_tuple(cls, tpl: tuple):
        return FileEntity(file_id=tpl[0], name=tpl[1], path=tpl[2], project_id=tpl[3])

    @property
    def get_preprocessed_path(self) -> str:
        return self.path.replace('project', 'out/preprocess')
    
    @property
    def get_formatted_path(self) -> str:
        return self.path.replace('project', 'out/format')


@dataclass
class MacroEntity:
    macro_id: str
    key: str
    value: str

    table_name = "macros"

    @classmethod
    def columns(cls):
        return ["id", "key", "value"]

    @property
    def to_tuple(self) -> tuple:
        return (self.macro_id, self.key, self.value)

    @classmethod
    def from_tuple(cls, tpl: tuple):
        return MacroEntity(macro_id=tpl[0], key=tpl[1], value=tpl[2])


@dataclass
class WholeMacroEntity:
    whole_macro_id: str
    macro_id: str
    file_id: str

    table_name = "whole_macros"

    @classmethod
    def columns(cls):
        return ["id", "macro_id", "file_id"]

    @property
    def to_tuple(self) -> tuple:
        return (self.whole_macro_id, self.macro_id, self.file_id)

    @classmethod
    def from_tuple(cls, tup: tuple):
        return WholeMacroEntity(
            whole_macro_id=tup[0],
            macro_id=tup[1],
            file_id=tup[2]
        )


@dataclass
class DefineMacroEntity:
    define_macro_id: str
    macro_id: str
    file_id: str

    table_name = "defined_macros"

    @classmethod
    def columns(cls):
        return ["id", "macro_id", "file_id"]

    @property
    def to_tuple(self) -> tuple:
        return (self.define_macro_id, self.macro_id, self.file_id)

    @classmethod
    def from_tuple(cls, tup: tuple):
        return DefineMacroEntity(
            define_macro_id=tup[0],
            macro_id=tup[1],
            file_id=tup[2]
        )


@dataclass
class AvailableMacroEntity:
    available_macro_id: str
    macro_id: str
    file_id: str

    table_name = "available_macros"

    @classmethod
    def columns(cls):
        return ["id", "macro_id", "file_id"]

    @property
    def to_tuple(self) -> tuple:
        return (self.available_macro_id, self.macro_id, self.file_id)

    @classmethod
    def from_tuple(cls, tup: tuple):
        return AvailableMacroEntity(
            available_macro_id=tup[0],
            macro_id=tup[1],
            file_id=tup[2]
        )


@dataclass
class UsedMacroEntity:
    used_macro_id: str
    macro_id: str
    file_id: str

    table_name = "used_macros"

    @classmethod
    def columns(cls):
        return ['id', 'macro_id', 'file_id']

    @property
    def to_tuple(self) -> tuple:
        return (self.used_macro_id, self.macro_id, self.file_id)

    @classmethod
    def from_tuple(self, tup: tuple):
        return UsedMacroEntity(
            used_macro_id=tup[0],
            macro_id=tup[1],
            file_id=tup[2]
        )
