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
      '--help',
      '--show',
      '--version'
    ]

    return all(arg not in args for arg in invalid_args)
