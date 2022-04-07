"""Project model module"""


class ProjectModel:
    """model of project"""
    def __init__(self, project_id: str, name: str, commit_hash: str, url: str):
        """initializer"""
        self.project_id: str = project_id
        self.name: str = name
        self.commit_hash: str = commit_hash
        self.url: str = url

    @property
    def get_project_path(self) -> str:
        """function of get project path"""
        project_root_path = "project/"
        return project_root_path + self.name
