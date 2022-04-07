from abc import ABC


class DBClient(ABC):
    def __init__(self, table_name: str, columns_name: list[str]):
        self.table_name: str = table_name
        self.columns: list[str] = columns_name

    def insert(self, data: tuple[str]):
        assert(len(self.columns) == len(data))

    def fetch(self, target_id: str):
        pass
