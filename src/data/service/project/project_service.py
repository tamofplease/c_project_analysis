"""service class of project model"""

from repository.project_repository import ProjectRepository
from data.service.project.project_converter import ProjectConverter

from data.model.project_model import ProjectModel
from data.entity.project_entity import ProjectEntity


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



def main():
    """example class of project_service"""
    pass


if __name__ == "__main__":
    main()