import os
import subprocess

from helpers.args import ArgsHelper
from helpers.path import PathHelper
from flask import request, jsonify, send_file



def register_generate(app):
  """
    Register the generate route.
  """



  @app.route('/generate', methods=['POST'])
  def generate():
    """
      Generate a card.
    """

    data = request.get_json()
    args = data.get('args', '')

    try:
      if not ArgsHelper.is_valid(args):
        raise Exception('Invalid arguments')

      executable_path = PathHelper.get_executable_path()
      output_path = PathHelper.get_output_path('out')

      command = f'{executable_path} {args} -o {output_path}'
      result = subprocess.run(command, shell=True, capture_output=True, text=True)

      if result.returncode == 0:
        if os.path.exists(output_path):
          return send_file(output_path, mimetype='image/png')
        else:
          raise Exception('File not found')
      else:
        raise Exception(result.stderr)

    except Exception as e:
        return jsonify({"error": str(e)}), 500
