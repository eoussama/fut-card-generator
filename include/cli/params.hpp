#ifndef PARAMS_HPP
#define PARAMS_HPP

#include <string>

#include "stats.hpp"
#include "country.hpp"
#include "position.hpp"

namespace Cli
{
  struct Params
  {
    Params() = default;

    std::string name;
    std::string logo;
    std::string image;
    Player::Stats stats;
    Player::Country country;
    Player::Position position;

    std::string toString() const;
  };

}

#endif