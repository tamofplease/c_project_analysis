"""Project model module"""


class ProjectModel:
    """model of project"""
    def __init__(self, project_id: str, name: str, commit_hash: str, url: str):
        """"""
        self.project_id = project_id,
        self.name = name,
        self.commit_hash = commit_hash
        self.url = url

    @property
    def get_project_path(self):
        """function of get project path"""
        project_root_path = "projects"
        return project_root_path + self.name
