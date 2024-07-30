#ifndef CLI_HPP
#define CLI_HPP

#include <argparse/argparse.hpp>

#include "params.hpp"

namespace Cli
{
  Params init(int argc, char *argv[]);
}

#endif