"""module of project entity"""

import dataclasses


@dataclasses.dataclass
class ProjectEntity:
    """Entity of Project record"""
    project_id: str
    name: str
    commit_hash: str
    url: str
