from tqdm import tqdm
from repository import (
    define_macro_repository,
    file_repository,
    project_repository,
    DefineMacroRepository,
    FileRepository,
    ProjectRepository,
)
from entity import DefineMacroEntity, FileEntity, ProjectEntity


class ProjectService:
    """service class for project model"""

    def __init__(self,  project_repository: ProjectRepository):
        self.repository = project_repository

    def list_up_projects(self) -> list[ProjectEntity]:
        project_entities: list[ProjectEntity] = self.repository.get_current_project()
        return project_entities

    def save_project_to_local(self, projects: list[ProjectEntity]):
        """function of get and fetch project and save to local dir"""
        for project in projects:
            self.repository.fetch_from_remote(project=project)

    def save_project_record(self, projects: list[ProjectEntity]):
        """function of save project record to specific database"""
        for project in projects:
            self.repository.save_information_to_database(project)


class FileService:
    """service class for generate file records"""

    def __init__(self, file_repository: FileRepository):
        self.file_repository = file_repository

    def list_up_files(self, projects: list[ProjectEntity]) -> list[FileEntity]:
        results = []
        for project in projects:
            results += self.file_repository.get_all_files_from_local(project=project)
        return results

    def save_to_file_record(self, files: list[FileEntity]) -> None:
        for index, file in enumerate(tqdm(files)):
            file.file_id = index
            self.file_repository.save_information_to_database(file)


class DefineMacroService:
    """service class for define_macro"""

    def __init__(self, define_macro_repository: DefineMacroRepository):
        self.define_macro_repository = define_macro_repository

    def list_up_define_macros(self, files: list[FileEntity]) -> list[DefineMacroEntity]:
        results: list[DefineMacroEntity] = []
        for file in tqdm(files):
            results += self.define_macro_repository.get_define_macros_from_file(file)
        return results

    def save_to_define_macro_record(self, define_macros: list[DefineMacroEntity]) -> None:
        for index, define_macro in enumerate(tqdm(define_macros)):
            define_macro.define_macro_id = index
            self.define_macro_repository.save_information_to_database


project_service = ProjectService(
    project_repository=project_repository
)

file_service = FileService(
    file_repository=file_repository
)

define_macro_service = DefineMacroService(
    define_macro_repository=define_macro_repository
)
