"""This is a repository class for Project model"""

from os.path import exists
import git

from project_entity import ProjectEntity
from project_model import ProjectModel


class ProjectRepository():
    """Implementation of ProjectRepository class"""

    def __init__(self):
        pass
        # self.db_client = dbClient

    # def fetch_by_id(self, project_id: str):
    #     """This is a function to fetch project entity by id"""
    def get_current_project(self) -> list[ProjectEntity]:
        """return initial ProjectEntity"""
        with open('list.tsv', encoding='utf-8') as opened_file:
            return list(
                map(
                    lambda data: ProjectEntity(data[0], data[1], data[3], data[4]),
                    [[x.strip() for x in line.split('\t')] for line in list(opened_file)[1:]]
                )
            )

    def fetch_from_remote(self, project: ProjectModel):
        """"function to fetch from git and save project"""
        print(project.name)
        output_path: str = project.get_project_path
        if not exists(output_path):
            repo = git.Repo.clone_from(
                project.url,
                output_path,
                no_checkout=True
            )
            repo.git.checkout(project.commit_hash)


def main():
    """ main function"""
    repo = ProjectRepository()
    res = repo.get_current_project()
    print(res)


if __name__ == "__main__":
    main()
