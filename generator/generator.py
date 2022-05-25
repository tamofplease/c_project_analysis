from tqdm import tqdm
from client import (
    CSVClient
)
from client import ExtractorClient
from type import FormatType

from service import (
    file_service,
    project_service,
)
from entity import FileEntity, ProjectEntity, MacroEntity


def main():
    # fetch target projects from list.tsv
    projects: list[ProjectEntity] = project_service.list_up_projects()
    projects = list(filter(lambda project: project.project_id in ['2', '3', '4', '5', '9', '16', '19'], projects))
    # # fetch target project from github
    # project_service.save_project_to_local(projects=projects)

    # # save project to db
    # project_service.save_project_record(projects=projects)

    # get c or h files from target project
    # files: list[FileEntity] = file_service.list_up_files(projects=projects)

    # # save file to db
    # file_service.save_to_file_record(files=files)

    # get define_macros from all files
    # define_macros: list[DefineMacroEntity] = define_macro_service.list_up_define_macros(files=files)

    # save define_macro to db
    # define_macro_service.save_to_define_macro_record(define_macros=define_macros)

    # for file in tqdm(files):
    #     type = FormatType.FORMAT
    #     formatter = FileFormatter(path=file.path, format_type=type)
    #     formatter.build_executable_command()
    #     content, error = formatter.execute(debug=False)
    #     if error:
    #         # handle error
    #         print(error)
    #         pass
    #     else:
    #         out = file.path.replace('project', 'out/' + type.get_output_root)
    #         os.makedirs(os.path.dirname(out), exist_ok=True)
    #         with open(out, 'w') as f:
    #             f.write(content)

    extractorClient = ExtractorClient()

    macrosCsvClient = CSVClient('macros', ['id', 'key', 'value'])
    macros = set()
    for macro in macrosCsvClient.fetch_all():
        macros.add((macro[1], macro[2]))
    files: list[FileEntity] = file_service.fetch_files()
    new_macros = set()
    for file in tqdm(files):
        type = FormatType.
        path = file.path.replace('project', 'out/' + type.get_output_root)
        current_macros = extractorClient.extract_define_macros(path, type) 
        new_macros = new_macros.union(current_macros.difference(macros))
        macros = macros.union(new_macros)
    print(len(macros))
    print(len(new_macros))

    max_id = macrosCsvClient.get_current_max_id
    for id, macro in enumerate(new_macros):
        macrosCsvClient.insert((int(max_id) + id + 1, ) + macro)

    macro_models: list[MacroEntity] = list(map(lambda data: MacroEntity.from_tuple(data), macrosCsvClient.fetch_all()))
    macro_mapper = {}
    for model in macro_models:
        macro_mapper[(model.key, model.value)] = model.macro_id

    whole_macros = set()
    wholeMacroCsvClient = CSVClient('whole_macros', ['id', 'macro_id', 'file_id'])
    for file in tqdm(files):
        type = FormatType.WHOLE
        path = file.path.replace('project', 'out/' + type.get_output_root)
        macros = extractorClient.extract_define_macros(path, type)
        for macro in macros:
            whole_macros.add((macro_mapper[(macro[0], macro[1])], file.file_id))
    print(len(whole_macros))
    for id, whole_macro in enumerate(tqdm(whole_macros)):
        wholeMacroCsvClient.insert((id, ) + whole_macro)


if __name__ == "__main__":
    main()
