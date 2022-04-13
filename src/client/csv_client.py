import csv
from os.path import exists

import sys

from db_client import DBClient

sys.path.append("src/client")
sys.path.append("./")

from constant import Constant  # noqa: E402


class CSVClient(DBClient):
    def __init__(self, table_name: str, columns_name: list[str]):
        super().__init__(table_name, columns_name)

    def insert(self, data: tuple[str]):
        super().insert(data)
        target_path = self.get_target_path

        if not exists(target_path):
            with open(target_path, 'w') as output_file:
                writer = csv.writer(output_file)
                writer.writerow(self.columns)
        includeId = False
        with open(target_path, 'r') as f_in:
            reader = csv.reader(f_in)
            for row in list(reader)[1:]:
                if(row[0] == data[0]):
                    includeId = True

        if not includeId:
            with open(target_path, 'a') as f_out:
                writer = csv.writer(f_out)
                writer.writerow(data)

    def fetch(self, target_id: str) -> list[str]:
        target_path = self.get_target_path
        with open(target_path, 'r') as f_out:
            reader = csv.reader(f_out)
            for row in reader:
                if row[0] == target_id:
                    return row
        raise Exception("Specific target_id could not found :{}".format(target_id))

    def fetch_all(self) -> list[list[str]]:
        target_path = self.get_target_path
        with open(target_path, 'r') as f_out:
            reader = csv.reader(f_out)
            return [row for row in list(reader)]

    @property
    def get_target_path(self):
        """return path to output """
        return Constant.output_root_path + "/" + self.table_name + ".csv"


def main():
    client = CSVClient("project_test", ["id", "name", "commit_hash", "url"])
    client.insert(["1", "sample_name", "sample_commit_hash", "sample_url"])
    client.insert(["1", "sample_name2", "sample_commit_hash", "sample_url"])
    client.insert(["2", "sample_name3", "sample_commit_hash", "sample_url"])


if __name__ == "__main__":
    main()
