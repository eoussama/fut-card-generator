import os
import sys
import uuid
import hashlib

from pathlib import Path



class PathHelper:
  """
    Helper class for path manipulation.
  """



  @staticmethod
  def get_root_path() -> str:
    """
      Get the root path of the project.
    """

    entry_path = os.path.abspath(sys.argv[0])
    entry_directory = os.path.dirname(entry_path)
    root_path = os.path.dirname(entry_directory)

    return root_path



  @staticmethod
  def get_executable_path() -> str:
    """
      Get the executable path of the project.
    """

    root_path = PathHelper.get_root_path()
    executable_path = f'{root_path}/release/fut-card-generator'
    
    return executable_path



  @staticmethod
  def get_output_path(filename: str) -> str:
    """
      Get the output path of the project.

      Args:
        filename (str): Filename of the output file
    """

    generation_path = PathHelper.get_generation_path()
    generation_path.mkdir(parents=True, exist_ok=True)
    output_path = f'{generation_path}/{filename}.png'
    
    return output_path



  @staticmethod
  def get_generation_path():
    """
      Get the generation path of a request.
    """

    root_path = PathHelper.get_root_path()
    unique_hash = hashlib.sha256(f"{uuid.uuid4()}".encode()).hexdigest()
    generation_path = Path(f'{root_path}/api/generations/{unique_hash}')
    
    return generation_path