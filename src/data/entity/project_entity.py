"""module of project entity"""

import dataclasses


@dataclasses.dataclass
class ProjectEntity:
    """Entity of Project record"""
    project_id: str
    name: str
    commit_hash: str
    url: str

    @classmethod
    def from_list(cls, data: list[str]):
        assert(len(data) == 4)
        return cls(
            project_id=data[0],
            name=data[1],
            commit_hash=data[2],
            url=data[3]
        )

    @classmethod
    def from_map(cls, data: dict[str, str]):
        return cls(
            project_id=data["project_id"],
            name=data["name"],
            commit_hash=data["commit_hash"],
            url=data["url"]
        )

    @property
    def path(self) -> str:
        """function of get project_path"""
        project_root_path = "project/"
        return project_root_path + self.name

    def to_tuple(self) -> tuple:
        return (self.project_id, self.name, self.commit_hash, self.url)
