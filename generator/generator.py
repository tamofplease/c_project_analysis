from service import (
    file_service,
    project_service,
    define_macro_service,
)
from entity import DefineMacroEntity, FileEntity, ProjectEntity


def main():
    # fetch target projects from list.tsv
    projects: list[ProjectEntity] = project_service.list_up_projects()

    # # fetch target project from github
    # project_service.save_project_to_local(projects=projects)

    # # save project to db
    # project_service.save_project_record(projects=projects)

    # get c or h files from target project
    files: list[FileEntity] = file_service.list_up_files(projects=projects)

    # # save file to db
    # file_service.save_to_file_record(files=files)

    # get define_macros from all files
    define_macros: list[DefineMacroEntity] = define_macro_service.list_up_define_macros(files=files)

    # save define_macro to db
    define_macro_service.save_to_define_macro_record(define_macros=define_macros)


if __name__ == "__main__":
    main()
