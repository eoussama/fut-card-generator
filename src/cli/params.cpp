#include "cli/params.hpp"

namespace Cli
{
  std::string Params::toString() const
  {
    return "Params(Name: " + name + ")";
  }
}