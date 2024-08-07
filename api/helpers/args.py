class ArgsHelper:
  """
    Helper class for parsing arguments.
  """

  

  @staticmethod
  def is_valid(args: str):
    """
      Check if the arguments are valid.

    """

    invalid_args = [
      '-h',
      '-s',
      '-v',
      '--help',
      '--show',
      '--version'
    ]

    return all(arg not in args for arg in invalid_args)
