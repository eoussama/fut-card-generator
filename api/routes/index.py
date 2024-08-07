from flask import Flask
from models.config import Config



def register_index(app: Flask, config: Config):
  @app.route('/')
  def index():
	  return f'API for fut-card-generator v{config.version}\n'
