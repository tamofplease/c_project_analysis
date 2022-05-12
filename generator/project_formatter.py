import json
import platform
from enum import Enum
from subprocess import PIPE, run

from tqdm import tqdm

from client import LocalFileClient
from constant import Constant


class ErrorType(Enum):
    INCLUDE_ERROR = 1


class FormatType(Enum):
    FORMAT = 1
    PREPROCESS = 2
    WHOLE = 3
    AVAILABLE = 4

    @property
    def initial_command_option(self):
        match self:
            case FormatType.FORMAT:
                return "-preprocessed -dD -E"
            case FormatType.PREPROCESS:
                return "-E"
            case FormatType.WHOLE:
                return "-E -dD"
            case FormatType.AVAILABLE:
                return "-E -dM"

    @property
    def get_output_root(self):
        match self:
            case FormatType.FORMAT:
                return "format"
            case FormatType.PREPROCESS:
                return "preprocess"
            case FormatType.WHOLE:
                return "whole"
            case FormatType.AVAILABLE:
                return "available"


class FileFormatter():
    def __init__(self, path: str, format_type: FormatType):
        self.path = path
        self.format_type = format_type
        if Constant.local_project_root_path in path:
            project_name = path[len(Constant.local_project_root_path):].split("/")[1]
        else:
            project_name = path.split("/")[1]
        project_root_path = Constant.local_project_root_path + '/' + project_name
        self.compiler_path = "/usr/local/bin/gcc-11"
        self.include_path = ""
        with open("compile_information/{}.json".format(project_name)) as fp:
            data = json.load(fp)
            self.limited_mac = data["limited_words"]["mac"]
            self.limited_windows = data["limited_words"]["windows"]
            self.limited_linux = data["limited_words"]["linux"]
            for include_path in data["include_path"]["absolute"]["quote"]:
                self.include_path += " -iquote {} ".format(include_path)
            for include_path in data["include_path"]["absolute"]["system"]:
                self.include_path += " -isystem {} ".format(include_path)
            for include_path in data["include_path"]["relative"]["quote"]:
                self.include_path += " -iquote {} ".format(project_root_path + '/' + include_path)
            for include_path in data["include_path"]["relative"]["system"]:
                self.include_path += " -isystem {} ".format(project_root_path + '/' + include_path)
            self.ignore_word = data["ignore_word"]

    def __format_error(self, errors: list[str]) -> str:
        for error in errors:
            if "#include" in error or '# include' in error:
                return error
        return ""

    def __should_ignore_error(self, errors: list[str]) -> bool:
        ignore_words = self.ignore_word
        if platform.system() == "Darwin":
            ignore_words += self.limited_linux + self.limited_windows
        else:
            raise Exception
        return any([any([word in error for word in ignore_words]) for error in errors])

    def build_executable_command(self) -> str:
        self.execute_string = "{} {} {} {}".format(
            self.compiler_path,
            self.format_type.initial_command_option,
            self.path,
            self.include_path
        )
        return self.execute_string

    def execute(self, debug=True):
        proc = run(
            self.execute_string,
            shell=True,
            stdout=PIPE,
            stderr=PIPE,
            text=True,
            errors='ignore',
        )
        content, errors = proc.stdout, proc.stderr.split('\n')
        if debug:
            if self.__should_ignore_error(errors):
                return ([], "")
            return [], self.__format_error(errors)
        else:
            return content, self.__format_error(errors)


def main():
    project_root = "/Users/washi38/University/Labo/c_project_analysis/project/radare2"
    client = LocalFileClient()
    paths = client.file_paths(project_path=project_root)
    cnt = 0
    for path in tqdm(paths):
        model = FileFormatter(path=path, format_type=FormatType.AVAILABLE)
        model.build_executable_command()
        content, error = model.execute()
        if error != "":
            print(error)
            print(path)
            cnt += 1
    print(cnt)


if __name__ == "__main__":
    main()
