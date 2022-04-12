import os
import glob


class LocalFileClient():
    def __init__(self):
        pass

    def project_paths(self) -> list[str]:
        root = os.getcwd() + "/project"
        return [root + "/" + dirname for dirname in os.listdir(root)]

    def files_paths(self, project_path) -> list[str]:
        return list(glob.glob(project_path + "/**/*.[h,c]", recursive=True))

    def read_content(self, file_path) -> list[str]:
        f = open(file_path, "r")
        return list(f.readlines())


def main():
    client = LocalFileClient()
    paths = client.project_paths()
    client.files_paths(paths[0])


if __name__ == "__main__":
    main()
