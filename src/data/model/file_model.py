

from typing import Tuple


class FileModel:
    """model of file"""
    def __init__(self, file_id: str, name: str, path: str, project_id: str):
        """initializer"""
        self.file_id = file_id
        self.name = name
        self.path = path
        self.project_id = project_id

    @property
    def to_tuple(self) -> Tuple[str, str, str, str]:
        return (self.file_id, self.name, self.path, self.project_id)
