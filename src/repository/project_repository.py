"""This is a repository class for Project model"""

import sys

from client.local_file_client import LocalFileClient
sys.path.append("./")
sys.path.append("venv/lib/python3.9/site-packages")
sys.path.append("src/client")
sys.path.append("src/data/service")
sys.path.append("src/data/entity")
sys.path.append("src/data/model")
sys.path.append("src/repository")

from os.path import exists  # noqa: E402
from csv_client import CSVClient  # noqa: E402
from db_client import DBClient  # noqa: E402
import git  # noqa: E402

from project_entity import ProjectEntity  # noqa: E402


class ProjectRepository():
    """Implementation of ProjectRepository class"""

    def __init__(self, db_client: DBClient, local_file_client: LocalFileClient):
        self.db_client = db_client
        self.local_file_client = local_file_client

    def get_current_project(self) -> list[ProjectEntity]:
        """return initial ProjectEntity"""
        with open('list.tsv', encoding='utf-8') as opened_file:
            return list(
                map(
                    lambda data: ProjectEntity.from_list(data),
                    [[x.strip() for x in line.split('\t')] for line in list(opened_file)[1:]]
                )
            )

    def fetch_from_id(self, project_id: str):
        data: list[str] = self.db_client.fetch(project_id)
        return ProjectEntity.from_list(data)

    def fetch_from_remote(self, project: ProjectEntity):
        """"function to fetch from git and save project"""
        output_path: str = project.get_project_path
        if not exists(output_path):
            repo = git.Repo.clone_from(
                project.url,
                output_path,
                no_checkout=True
            )
            repo.git.checkout(project.commit_hash)

    def save_information_to_database(self, project: ProjectEntity):
        """function to save project model to database"""
        self.db_client.insert(project.to_tuple)


def main():
    """ main function"""
    repo = ProjectRepository(
        CSVClient("project", ["id", "name", "commit_hash", "url"])
    )
    res = repo.get_current_project()
    print(res)


if __name__ == "__main__":
    main()
