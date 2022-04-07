"""module of something"""


import sys
from data.service.project.project_service import ProjectService


project_service = ProjectService()


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
