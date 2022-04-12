"""service class of project model"""


from project_repository import ProjectRepository
from project_converter import ProjectConverter
from project_model import ProjectModel

from project_entity import ProjectEntity
from file_entity import FileEntity


class ProjectService:
    """service class for project model"""

    def __init__(self, converter: ProjectConverter, repository: ProjectRepository):
        self.converter = converter
        self.repository = repository

    def __list_up_projects(self) -> ProjectModel:
        project_entities: list[ProjectEntity] = self.repository.get_current_project()
        project_models: list[ProjectModel] = [self.converter.entity_to_model(project) for project in project_entities]
        return project_models

    def save_project_to_local(self):
        """function of get and fetch project and save to local dir"""
        project_models: list[ProjectModel] = self.__list_up_projects()
        for project_model in project_models:
            self.repository.fetch_from_remote(project_model)

    def save_project_record(self):
        """function of save project record to specific database"""
        project_models: list[ProjectModel] = self.__list_up_projects()
        for project_model in project_models:
            self.repository.save_information_to_database(project_model)

    def files(self, project_id: str) -> list[FileEntity]:
        """function of listup files model of specific project"""


def main():
    """example class of project_service"""
    pass


if __name__ == "__main__":
    main()
