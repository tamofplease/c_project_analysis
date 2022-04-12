import dataclasses


@dataclasses.dataclass
class FileEntity:
    """Entity of File record"""
    file_id: str
    name: str
    path: str
