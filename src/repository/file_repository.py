
import sys

sys.path.append("./")
sys.path.append("venv/lib/python3.9/site-packages")
sys.path.append("src/client")
sys.path.append("src/data/service")
sys.path.append("src/data/entity")
sys.path.append("src/data/model")
sys.path.append("src/repository")

from db_client import DBClient  # noqa: E402
from local_file_client import LocalFileClient  # noqa: E402

from project_entity import ProjectEntity  # noqa: E402
from file_entity import FileEntity  # noqa: E402


class FileRepository():
    """Implementation of FileRepository class"""

    def __init__(self, db_client: DBClient, local_file_client: LocalFileClient):
        self.db_client = db_client
        self.local_file_client = local_file_client

    def get_all_files_from_local(self, project: ProjectEntity) -> list[str]:
        return self.local_file_client.file_paths(project.path)

    def save_information_to_database(self, file: FileEntity):
        self.db_client.insert(file.to_tuple)


def main():
    db_client = DBClient("file", ["file_id", "name", "path", "project_id"])
    local_file_client = LocalFileClient()
    repo = FileRepository(db_client=db_client, local_file_client=local_file_client)
    print(repo)


if __name__ == "__main__":
    main()