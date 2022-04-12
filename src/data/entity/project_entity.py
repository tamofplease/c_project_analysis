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
