from enum import Enum
from subprocess import PIPE, run


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

    def build_executable_command(self):
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
        res, errors = proc.stdout, proc.stderr.split('\n')
        print(res, errors)


def main():
    print(FormatType.AVAILABLE.initial_command_option)
    formatter = FileFormatter(
        path='/Users/washi38/University/Labo/c_project_analysis/project/Nuklear/nuklear.h',
        format_type=FormatType.AVAILABLE,
    )

    formatter.build_executable_command()


if __name__ == "__main__":
    main()
