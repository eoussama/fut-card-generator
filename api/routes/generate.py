import os
import subprocess

from flask import request, jsonify, send_file



def register_generate(app):
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
