from enum import Enum


class FormatType(Enum):
    FORMAT = 1
    PREPROCESS = 2
    WHOLE = 3
    AVAILABLE = 4


class FileFormatter():
    def __init__(self, path: str, format_type: FormatType):
        self.path = path
        self.type = format_type

    def build_executable_command(self):
        pass
