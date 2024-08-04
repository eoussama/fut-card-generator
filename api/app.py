# import subprocess
import os
from dotenv import load_dotenv
from flask import Flask, request, jsonify

load_dotenv()
app = Flask(__name__)

@app.route('/')
def index():
    return 'Hello World'
# @app.route('/generate', methods=['POST'])
# def generate():
#     print('fff')
#     data = request.get_json()
#     args = data.get('args', '')

#     print(args)
#     # try:
#     #     cmd = f'../release/fut-card-generator {args}'
#     #     result = subprocess.run(cmd, shell=True, capture_output=True, text=True)
#     #     output = result.stdout
#     #     error = result.stderr
#     #     return_code = result.returncode
#     # except Exception as e:
#     #     return jsonify({"error": str(e)}), 500

#     # return jsonify({
#     #     "output": output,
#     #     "error": error,
#     #     "return_code": return_code
#     # })

#     return jsonify({
#         "output": "Hello World"
#     })

if __name__ == '__main__':
    app.run(debug=True, host=os.getenv('API_HOST'), port=os.getenv('API_PORT'))
