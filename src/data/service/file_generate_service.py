class FileGenerateService:
    """service class for generate file records"""

    def __init__(self, converter: FileConverter, repository: FileRepository):
        self.converter = converter
        self.repository = repository

    # def __list_up_files(self, project_id: id) -> 
    