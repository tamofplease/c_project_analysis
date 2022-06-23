from dataclasses import dataclass
import pandas as pd


@dataclass
class TableProps:
    title: str
    file_name: str
    data: pd.core.frame.DataFrame


class TableConverter():
    def __init__(self):
        pass

    @classmethod
    def __to_table_string(self, title: str, file_name: str, content_string: str):
        return """
\\begin{{table}}[h]
    \\caption{{{0}}}
    \\label{{table:{1}}}
    {2}
\\end{{table}}""".format(title, file_name, content_string)

    def __build_content_string(self, data: pd.core.frame.DataFrame) -> str:
        def __title_helper(cols: list[str]) -> str:
            return "\\hline\n\t" + " & ".join(map(str, cols)) + " \\\\ \n\t\\hline \\hline"

        def __content_helper(row: list[str]) -> str:
            return "\t" + " & ".join(map(str, row)) + " \\\\ \n\t\\hline\n"

        col_num = len(data.columns)
        contents = ""
        for _, item in data.iterrows():
            contents += __content_helper(list(item))
        return """\t\\begin{{tabular}}{{{0}}}
        {1}
        {2}
    \\end{{tabular}}""".format(col_num * 'c', __title_helper(data.columns), contents)

    def save_as_table(self, props: TableProps):
        content_string = self.__build_content_string(props.data)
        with open('../paper/lib/src/table/{}'.format(props.file_name + '.tex'), mode='w') as f:
            contents = self.__to_table_string(props.title, props.file_name, content_string)
            f.writelines(contents)
