#ifndef PARAMS_HPP
#define PARAMS_HPP

#include <string>

#include "position.hpp"

namespace Cli
{
  struct Params
  {
    std::string name;
    std::string logo;
    std::string image;
    Player::Position position;

    std::string toString() const;
  };

}

#endif