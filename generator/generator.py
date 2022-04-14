from service import file_service, project_service
from entity import FileEntity, ProjectEntity


def main():
    # fetch target projects from list.tsv
    projects: list[ProjectEntity] = project_service.list_up_projects()

    # fetch target project from github
    project_service.save_project_to_local(projects=projects)

    # save project to db
    project_service.save_project_record(projects=projects)

    # fetch c or h files from target project
    files: list[FileEntity] = file_service.list_up_files(projects=projects)

    # save file to db
    file_service.save_to_file_record(files=files)


if __name__ == "__main__":
    main()
