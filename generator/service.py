from repository import FileRepository, ProjectRepository
from entity import FileEntity, ProjectEntity


class ProjectService:
    """service class for project model"""

    def __init__(self,  repository: ProjectRepository):
        self.repository = repository

    def __list_up_projects(self) -> list[ProjectEntity]:
        project_entities: list[ProjectEntity] = self.repository.get_current_project()
        return project_entities

    def save_project_to_local(self):
        """function of get and fetch project and save to local dir"""
        project_models: list[ProjectEntity] = self.__list_up_projects()
        for project_model in project_models:
            self.repository.fetch_from_remote(project_model)

    def save_project_record(self):
        """function of save project record to specific database"""
        project_models: list[ProjectEntity] = self.__list_up_projects()
        for project_model in project_models:
            self.repository.save_information_to_database(project_model)


class FileService:
    """service class for generate file records"""

    def __init__(self, file_repository: FileRepository, project_repository: ProjectRepository):
        self.file_repository = file_repository
        self.project_repository = project_repository

    def list_up_files(self, project_id: str) -> list[FileEntity]:
        project_entity = self.project_repository.fetch_from_id(project_id=project_id)
        return self.file_repository.get_all_files_from_local(project_entity)

    def save_to_file_record(self):
        project_entities = self.project_repository.get_current_project()
        for project_entity in project_entities:
            file_entities: list[FileEntity] = self.list_up_files(project_entity.project_id)
            self.file_repository.save_information_to_database(file_entities)
