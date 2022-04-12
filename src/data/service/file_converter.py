"""module of file converter"""


from file_entity import FileEntity
from file_model import FileModel


class FileConverter:
    """class of file converter"""
    def entity_to_model(self, file_entity: FileEntity) -> FileModel:
        """convert file_entity to file_model"""
        return FileModel(
            file_entity.file_id,
            file_entity.name,
            file_entity.path,
            file_entity.project_id
        )

    def model_to_entity(self, file_model: FileModel) -> FileEntity:
        """conevert file_model to file_entity"""
        return FileEntity(
            project_id=file_model.project_id,
            name=file_model.name,
            path=file_model.path,
            project_id=file_model.project_id
        )
