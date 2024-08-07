from flask import Flask

from models.config import Config
from routes.index import register_index
from routes.generate import register_generate



if __name__ == '__main__':
	app = Flask(__name__)
	config = Config.from_env()

	register_index(app, config)
	register_generate(app)
	
	print(f'Starting Fut Card Generator {config.version} API...')
	app.run(debug=False, host=config.host, port=config.port)
