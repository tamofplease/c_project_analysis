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