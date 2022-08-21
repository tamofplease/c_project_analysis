from os.path import exists
import git
from generator.client import (
    project_csv_client,
    file_csv_client,
    macro_csv_client,
    whole_macro_csv_client,
    define_macro_csv_client,
    available_macro_csv_client,
    used_macro_csv_client,
    local_file_client,
    DBClient,
    LocalFileClient,
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


class ProjectRepository:
    """Implementation of ProjectRepository class"""

    def __init__(self, db_client: DBClient, local_file_client: LocalFileClient):
        self.db_client = db_client
        self.local_file_client = local_file_client

    def get_current_project(self) -> list[ProjectEntity]:
        """return initial ProjectEntity"""
        with open("../list.tsv", encoding="utf-8") as opened_file:
            return list(
                map(
                    lambda data: ProjectEntity.from_list(data),
                    [
                        [x.strip() for x in line.split("\t")]
                        for line in list(opened_file)[1:]
                    ],
                )
            )

    def fetch_from_id(self, project_id: str) -> ProjectEntity:
        data: list[str] = self.db_client.fetch(project_id)
        return ProjectEntity.from_list(data)

    def fetch_from_remote(self, project: ProjectEntity):
        """ "function to fetch from git and save project"""
        output_path: str = project.get_project_path
        if not exists(output_path):
            repo = git.Repo.clone_from(project.url, output_path, no_checkout=True)
            repo.git.checkout(project.commit_hash)

    def save_information_to_database(self, project: ProjectEntity):
        """function to save project model to database"""
        self.db_client.insert(project.to_tuple)


class FileRepository:
    """Implementation of FileRepository class"""

    def __init__(self, db_client: DBClient, local_file_client: LocalFileClient):
        self.db_client = db_client
        self.local_file_client = local_file_client

    def get_all_files_from_local(self, project: ProjectEntity) -> list[FileEntity]:
        return list(
            map(
                lambda data: FileEntity.from_map(
                    {
                        "file_id": "1",
                        "name": data.split("/")[-1],
                        "path": data,
                        "project_id": project.project_id,
                    }
                ),
                self.local_file_client.file_paths(project.path),
            )
        )

    def save_information_to_database(self, file: FileEntity):
        self.db_client.insert(file.to_tuple)

    def get_all_files_from_remote(self) -> list[FileEntity]:
        return list(
            map(
                lambda data: FileEntity.from_map(
                    {
                        "file_id": data[0],
                        "name": data[1],
                        "path": data[2],
                        "project_id": data[3],
                    }
                ),
                self.db_client.fetch_all(),
            )
        )


class MacroRepository:
    """Implementation of MacroRepository class"""

    def __init__(self, db_client: DBClient):
        self.db_client = db_client

    def fetch_macros(self) -> list[MacroEntity]:
        return list(
            map(
                lambda data: MacroEntity.from_tuple(tuple(data)),
                self.db_client.fetch_all(),
            )
        )


class WholeMacroRepository:
    """Implementation of WholeMacroRepository class"""

    def __init__(self, db_client: DBClient):
        self.db_client = db_client

    def fetch_macros(self) -> list[WholeMacroEntity]:
        return list(
            map(
                lambda data: WholeMacroEntity.from_tuple(tuple(data)),
                self.db_client.fetch_all(),
            )
        )


class DefineMacroRepository:
    """Implementation of DefineMacroRepository class"""

    def __init__(self, db_client: DBClient):
        self.db_client = db_client

    def fetch_macros(self) -> list[DefineMacroEntity]:
        return list(
            map(
                lambda data: DefineMacroEntity.from_tuple(tuple(data)),
                self.db_client.fetch_all(),
            )
        )

    @property
    def next_id(self) -> int:
        try:
            return 1 + int(self.db_client.fetch_all()[-1][0])
        except Exception:
            return 1

    def save_information_to_database(self, define_macro: DefineMacroEntity):
        self.db_client.insert(define_macro.to_tuple)


class AvailableMacroRepository:
    """Implementation of AvailableMacroRepository class"""

    def __init__(self, db_client: DBClient):
        self.db_client = db_client

    def fetch_macros(self) -> list[AvailableMacroEntity]:
        return list(
            map(
                lambda data: AvailableMacroEntity.from_tuple(tuple(data)),
                self.db_client.fetch_all(),
            )
        )


class UsedMacroRepository:
    """Implementation of UsedMacroRepository class"""

    def __init__(self, db_client: DBClient):
        self.db_client = db_client

    def fetch_macros(self) -> list[UsedMacroEntity]:
        return list(
            map(
                lambda data: UsedMacroEntity.from_tuple(tuple(data)),
                self.db_client.fetch_all(),
            )
        )

    @property
    def next_id(self) -> int:
        try:
            return 1 + int(self.db_client.fetch_all()[-1][0])
        except Exception:
            return 1

    def save_information_to_database(self, used_macro: UsedMacroEntity):
        self.db_client.insert(used_macro.to_tuple)


project_repository = ProjectRepository(
    db_client=project_csv_client, local_file_client=local_file_client
)

file_repository = FileRepository(
    db_client=file_csv_client, local_file_client=local_file_client
)

macro_repository = MacroRepository(db_client=macro_csv_client)

whole_macro_repository = WholeMacroRepository(db_client=whole_macro_csv_client)

define_macro_repository = DefineMacroRepository(db_client=define_macro_csv_client)

available_macro_repository = AvailableMacroRepository(
    db_client=available_macro_csv_client
)

used_macro_repository = UsedMacroRepository(db_client=used_macro_csv_client)

if __name__ == "__main__":
    print(len(macro_repository.fetch_macros()))
