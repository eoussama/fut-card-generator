#ifndef PARAMS_HPP
#define PARAMS_HPP

#include <string>

namespace Cli
{
  struct Params
  {
    std::string name;

    std::string toString() const;
  };

}

#endif