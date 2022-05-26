from enum import Enum


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
                return "-fpreprocessed -dD -E"
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
