import os
from dotenv import load_dotenv



class Config:
  """
    Config class for the API
  """



  def __init__(self, host: str, port: int, version: str):
    """
      Initializes the Config class
      Args:
        host (str): Host of the API
        port (int): Port of the API
        version (str): Version of the API
    """

    self.host = host
    self.port = port
    self.version = version



  @classmethod
  def from_env(cls):
    """
      Loads the Config class from the environment variables
    """

    load_dotenv()
    
    return cls(
      os.getenv('API_HOST'),
      os.getenv('API_PORT'),
      os.getenv('GLOBAL_VERSION')
    )
