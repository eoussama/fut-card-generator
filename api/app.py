import os
import subprocess

from dotenv import load_dotenv
from flask import Flask, request, jsonify, send_file



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
			script_directory = os.path.dirname(os.path.abspath(__file__))
			parent_directory = os.path.dirname(script_directory)
			binary_directory = f'{parent_directory}/release'

			out = f'{script_directory}/out.png'
			cmd = f'{binary_directory}/fut-card-generator {args} -o {out}'

			result = subprocess.run(cmd, shell=True, capture_output=True, text=True)
			
			error = result.stderr
			output = result.stdout
			return_code = result.returncode

			if return_code == 0:
				if os.path.exists(out):
					return send_file(out, mimetype='image/png')
				else:
					raise Exception('File not found')
			else:
				raise Exception(error)

	except Exception as e:
			return jsonify({"error": str(e)}), 500

if __name__ == '__main__':
	host = os.getenv('API_HOST')
	port = os.getenv('API_PORT')

	app.run(debug=False, host=host, port=port)
