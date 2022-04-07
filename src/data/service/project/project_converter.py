"""module of project converter"""

from data.entity.project_entity import ProjectEntity
from data.model.project_model import ProjectModel


class ProjectConverter:
    """class of project converter"""
    def entity_to_model(self, project_entity: ProjectEntity) -> ProjectModel:
        """convert project_entity to project_model"""
        return ProjectModel(
            project_entity.id,
            project_entity.name,
            project_entity.commit_hash,
            project_entity.url,
        )

    def model_to_entity(self, project_model: ProjectModel) -> ProjectEntity:
        """convert project_model to project_entity"""
        return ProjectEntity(
            project_id=project_model.project_id,
            name=project_model.name,
            commit_hash=project_model.commit_hash,
            url=project_model.url,
        )
