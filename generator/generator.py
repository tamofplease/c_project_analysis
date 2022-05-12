import os
from tqdm import tqdm

from project_formatter import (
    FormatType,
    FileFormatter,
)
from service import (
    file_service,
    project_service,
)
from entity import FileEntity, ProjectEntity


def main():
    # fetch target projects from list.tsv
    projects: list[ProjectEntity] = project_service.list_up_projects()
    projects = list(filter(lambda project: project.project_id in ['2', '3', '4', '5', '9', '16', '19'], projects))
    # # fetch target project from github
    # project_service.save_project_to_local(projects=projects)

    # # save project to db
    # project_service.save_project_record(projects=projects)

    # get c or h files from target project
    files: list[FileEntity] = file_service.list_up_files(projects=projects)

    # # save file to db
    # file_service.save_to_file_record(files=files)

    # get define_macros from all files
    # define_macros: list[DefineMacroEntity] = define_macro_service.list_up_define_macros(files=files)

    # save define_macro to db
    # define_macro_service.save_to_define_macro_record(define_macros=define_macros)

    for file in tqdm(files):
        type = FormatType.FORMAT
        formatter = FileFormatter(path=file.path, format_type=type)
        formatter.build_executable_command()
        content, error = formatter.execute(debug=False)
        if error:
            # handle error
            print(error)
            pass
        else:
            out = file.path.replace('project', 'out/' + type.get_output_root)
            os.makedirs(os.path.dirname(out), exist_ok=True)
            with open(out, 'w') as f:
                f.write(content)
            


if __name__ == "__main__":
    main()
