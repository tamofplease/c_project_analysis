
import sys
sys.path.append("./")
sys.path.append("venv/lib/python3.9/site-packages")
sys.path.append("src/client")
sys.path.append("src/data/service")
sys.path.append("src/data/entity")
sys.path.append("src/data/model")
sys.path.append("src/repository")

from db_client import DBClient  # noqa: E402

from file_entity import FileEntity  # noqa: E402
from file_model import FileModel  # noqa: E402


class FileRepository():
    """Implementation of FileRepository class"""

    def __init__(self, db_client: DBClient):
        self.db_client = db_client

    def get_all_files_from_local(self, project_id: str) -> list[FileEntity]:
        """return initial """

    def save_information_to_database(self, file: FileModel):
        self.db_client.insert(file.to_tuple)
