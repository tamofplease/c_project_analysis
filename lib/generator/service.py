from tqdm import tqdm
from generator.repository import (
    project_repository,
    file_repository,
    macro_repository,
    whole_macro_repository,
    define_macro_repository,
    available_macro_repository,
    used_macro_repository,
    ProjectRepository,
    FileRepository,
    MacroRepository,
    WholeMacroRepository,
    DefineMacroRepository,
    AvailableMacroRepository,
    UsedMacroRepository,
)
from generator.entity import (
    ProjectEntity,
    FileEntity,
    MacroEntity,
    WholeMacroEntity,
    DefineMacroEntity,
    AvailableMacroEntity,
    UsedMacroEntity,
)


class ProjectService:
    """service class for project model"""

    def __init__(self, project_repository: ProjectRepository):
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

    def fetch_all(self) -> list[FileEntity]:
        return self.file_repository.get_all_files_from_remote()

    def save_to_file_record(self, files: list[FileEntity]) -> None:
        for index, file in enumerate(tqdm(files)):
            file.file_id = index
            self.file_repository.save_information_to_database(file)


class MacroService:
    def __init__(self, repository: MacroRepository):
        self.macro_repository = repository

    def fetch_all(self) -> list[MacroEntity]:
        return self.macro_repository.fetch_macros()


class WholeMacroService:
    def __init__(self, repository: WholeMacroRepository):
        self.whole_macro_repository = repository

    def fetch_all(self) -> list[WholeMacroEntity]:
        return self.whole_macro_repository.fetch_macros()


class DefineMacroService:
    def __init__(self, repository: DefineMacroRepository):
        self.define_macro_repository = repository

    def fetch_all(self) -> list[DefineMacroEntity]:
        return self.define_macro_repository.fetch_macros()

    def save(self, define_macros: list[DefineMacroEntity]) -> None:
        next_id = self.define_macro_repository.next_id
        for index, define_macro in enumerate(tqdm(define_macros)):
            define_macro.define_macro_id = index + next_id
            self.define_macro_repository.save_information_to_database(define_macro)


class AvailableMacroService:
    def __init__(self, repository: AvailableMacroRepository):
        self.available_macro_repository = repository

    def fetch_all(self) -> list[AvailableMacroEntity]:
        return self.available_macro_repository.fetch_macros()


class UsedMacroService:
    def __init__(self, repository: UsedMacroRepository):
        self.used_macro_repository = repository

    def fetch_all(self) -> list[UsedMacroEntity]:
        return self.used_macro_repository.fetch_macros()

    def save(self, used_macros: list[UsedMacroEntity]) -> None:
        next_id = self.used_macro_repository.next_id
        for index, used_macro in enumerate(tqdm(used_macros)):
            used_macro.used_macro_id = index + next_id
            self.used_macro_repository.save_information_to_database(used_macro)


project_service = ProjectService(project_repository=project_repository)

file_service = FileService(file_repository=file_repository)

macro_service = MacroService(repository=macro_repository)

whole_macro_service = WholeMacroService(repository=whole_macro_repository)

define_macro_service = DefineMacroService(repository=define_macro_repository)

available_macro_service = AvailableMacroService(repository=available_macro_repository)

used_macro_service = UsedMacroService(repository=used_macro_repository)
