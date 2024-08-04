import os
import subprocess

from dotenv import load_dotenv
from flask import Flask, request, jsonify



load_dotenv()
app = Flask(__name__)

@app.route('/')
def index():
	return f'API for fut-card-generator v{os.getenv("GLOBAL_VERSION")}'

@app.route('/generate', methods=['POST'])
def generate():
	data = request.get_json()
	args = data.get('args', '')

	try:
			cmd = f'./release/fut-card-generator {args}'
			result = subprocess.run(cmd, shell=True, capture_output=True, text=True)
			
			error = result.stderr
			output = result.stdout
			return_code = result.returncode

			if return_code == 0:
				# good
				return jsonify(True)
			else:
				raise Exception(error)

	except Exception as e:
			return jsonify({"error": str(e)}), 500

if __name__ == '__main__':
	host = os.getenv('API_HOST')
	port = os.getenv('API_PORT')

	app.run(debug=True, host=host, port=port)
