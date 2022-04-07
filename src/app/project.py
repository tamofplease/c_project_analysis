"""module of something"""


import sys

sys.path.append('src/data/service/project')
sys.path.append('src/repository')

from project_converter import ProjectConverter
from project_service import ProjectService
from project_repository import ProjectRepository

project_converter = ProjectConverter()
project_repository = ProjectRepository()
project_service = ProjectService(project_converter, project_repository)


def fetch_and_save_from_list():
    """function for fetch and save to local list"""
    project_service.save_project_to_local()


def main():
    """do something"""
    pass


if sys.argv[1] == "initialize":
    fetch_and_save_from_list()


if __name__ == "__main__":
    main()