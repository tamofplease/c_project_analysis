from os.path import exists
from typing import Tuple
from generator.entity import DefineMacroEntity
import git
from client import (
    project_csv_client,
    define_macro_client,
    extractor_client,
    file_csv_client,
    local_file_client,
    DBClient,
    ExtractorClient,
    LocalFileClient,
)
from entity import ProjectEntity, FileEntity


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

    def fetch_from_id(self, project_id: str) -> ProjectEntity:
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


class FileRepository():
    """Implementation of FileRepository class"""

    def __init__(self, db_client: DBClient, local_file_client: LocalFileClient):
        self.db_client = db_client
        self.local_file_client = local_file_client

    def get_all_files_from_local(self, project: ProjectEntity) -> list[FileEntity]:
        return list(map(
            lambda data: FileEntity.from_map(
                {
                    "file_id": "1",
                    "name": data.split("/")[-1],
                    "path": data,
                    "project_id": project.project_id,
                }
            ),
            self.local_file_client.file_paths(project.path)
        ))

    def save_information_to_database(self, file: FileEntity):
        self.db_client.insert(file.to_tuple)


class DefineMacroRepository():
    """ Implementation of DefineMacroRepository class"""

    def __init__(self, db_client: DBClient, extractor_client: ExtractorClient):
        self.db_client = db_client
        self.extractor_client = extractor_client

    def get_define_macros_from_file(self, file: FileEntity) -> list[DefineMacroEntity]:
        results: list[Tuple[str, str]] = extractor_client.extract_define_macros(file.path)
        return list(map(lambda x: DefineMacroEntity(id=0, key=x[0], value=x[1]), results))


project_repository = ProjectRepository(
    db_client=project_csv_client,
    local_file_client=local_file_client
)

file_repository = FileRepository(
    db_client=file_csv_client,
    local_file_client=local_file_client
)

define_macro_repository = DefineMacroRepository(
    db_client=define_macro_client,
    extractor_client=extractor_client
)
