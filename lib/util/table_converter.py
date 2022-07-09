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
        return """\\begin{{table}}[h]\n\t\\caption{{{0}}}\n\t\\label{{table:{1}}}\t{2}
\\end{{table}}""".format(title, file_name, content_string)

    def __build_content_string(self, data: pd.core.frame.DataFrame) -> str:
        def __title_helper(cols: list[str]) -> str:
            cols = list(map(lambda col: col.split('_')[0] + "".join(ele.title() for ele in col.split('_')[1:]), cols))
            return "\\hline\n\t\t" + " & ".join(map(str, cols)) + " \\\\ \n\t\t\\hline \\hline"

        def __content_helper(row: list[str]) -> str:
            return "\t\t" + " & ".join(map(str, row)) + " \\\\ \n\t\t\\hline\n"

        col_num = len(data.columns)
        contents = ""
        for _, item in data.iterrows():
            contents += __content_helper(list(item))
        return """\n\t\t\\begin{{tabular}}{{{0}}}\n\t\t{1}\n{2}\t\\end{{tabular}}""".format(
            col_num * 'c',
            __title_helper(data.columns),
            contents
        )

    def save_as_table(self, props: TableProps):
        content_string = self.__build_content_string(props.data)
        with open('../paper/lib/src/table/{}'.format(props.file_name + '.tex'), mode='w') as f:
            contents = self.__to_table_string(props.title, props.file_name, content_string)
            f.writelines(contents)
