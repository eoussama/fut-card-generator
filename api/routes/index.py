from flask import Flask
from models.config import Config



def register_index(app: Flask, config: Config):
  """
    Register the index route.
  """



  @app.route('/')
  def index():
    """
      Return the API version.
    """
    
    return f'API for fut-card-generator v{config.version}\n'
