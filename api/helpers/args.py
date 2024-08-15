class ArgsHelper:
  """
    Helper class for parsing arguments.
  """

  

  @staticmethod
  def is_valid(args: str) -> bool:
    """
      Check if the arguments are valid.

    """

    if len(args) == 0:
      return False

    invalid_args = [
      '-h',
      '-s',
      '-v',
      '-o',
      '--out',
      '--help',
      '--show',
      '--version'
    ]
    
    for arg in args.split(' '):
      if arg in invalid_args:
        return False

    return True
