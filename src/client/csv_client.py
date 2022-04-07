import csv
from os.path import exists

import sys
from client.db_client import DBClient

sys.path.append("./")

from constant import Constant  # noqa: E402


class CSVClient(DBClient):
    def __init__(self, table_name: str, columns_name: list[str]):
        super().__init__(table_name, columns_name)

    def insert(self, data: tuple[str]):
        super().insert()
        target_path = self.get_target_path

        if not exists(target_path):
            with open(target_path, 'w') as output_file:
                writer = csv.writer(output_file)
                writer.writerow(self.columns)
        with open(target_path, 'a') as output_file:
            writer = csv.writer(output_file)
            writer.writerow(data)

    def fetch(self, target_id: str):
        pass

    @property
    def get_target_path(self):
        """return path to output """
        return Constant.output_root_path + "/" + self.table_name + ".csv"


def main():
    client = CSVClient("project", ["id", "name", "commit_hash", "url"])
    client.insert(["i", "sample_name", "sample_commit_hash", "sample_url"])


if __name__ == "__main__":
    main()
