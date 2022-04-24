import json
import platform
from enum import Enum
from subprocess import PIPE, run

from tqdm import tqdm

from client import LocalFileClient


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
        self.compiler_path = "/usr/local/bin/gcc-11"
        with open("include_paths.json") as fp:
            data = json.load(fp)
            for include_path in data["include_paths"]:
                self.compiler_path += " -I {}".format(include_path)

    def __should_ignore_error(self, errors: list[str]) -> bool:
        if platform.system() == "Darwin":
            is_windows = any(["windows" in error for error in errors])
            if is_windows:
                return True
            is_linux_lib = any(["wayland" in error for error in errors])
            if is_linux_lib:
                return True
            return False
        return False

    def build_executable_command(self) -> list[str]:
        initial_execute_string = "{} {} {}".format(
            self.compiler_path,
            self.format_type.initial_command_option,
            self.path
        )
        proc = run(
            initial_execute_string,
            shell=True,
            stdout=PIPE,
            stderr=PIPE,
            text=True,
            errors='ignore',
        )
        _, errors = proc.stdout, proc.stderr.split('\n')
        if self.__should_ignore_error(errors):
            return [""]
        return errors

    def execuce(self) -> tuple[list[str], list[str]]:
        pass


def main():
    print(FormatType.AVAILABLE.initial_command_option)
    project_root = "/Users/washi38/University/Labo/c_project_analysis/project/bcc"
    client = LocalFileClient()
    paths = client.file_paths(project_path=project_root)
    cnt = 0
    for path in tqdm(paths):
        errors = FileFormatter(path=path, format_type=FormatType.AVAILABLE).build_executable_command()
        if len(errors) != 1:
            print(errors)
            cnt += 1
    print(cnt)


if __name__ == "__main__":
    main()
