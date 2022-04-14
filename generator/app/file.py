"""module of something"""


import sys

sys.path.append("./")
sys.path.append("venv/lib/python3.9/site-packages")
sys.path.append("src/client")
sys.path.append("src/data/service")
sys.path.append("src/data/entity")
sys.path.append("src/data/model")
sys.path.append("src/repository")

from csv_client import CSVClient  # noqa: E402
from project_service import ProjectService  # noqa: E402
from project_repository import ProjectRepository  # noqa: E402

project_repository = ProjectRepository(
    CSVClient("project", ["id", "name", "commit_hash", "url"])
)
project_service = ProjectService(project_repository=project_repository)


def fetch_and_save_from_list():
    """function for fetch and save to local list"""
    project_service.save_project_to_local()
    project_service.save_project_record()


def main():
    """do something"""
    pass


if sys.argv[1] == "initialize":
    fetch_and_save_from_list()


if __name__ == "__main__":
    main()
