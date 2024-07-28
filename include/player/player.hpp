#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

#include "stats.hpp"
#include "player.hpp"
#include "country.hpp"
#include "position.hpp"

namespace Player
{
  class Base
  {
  public:
    Base(const std::string &name, const Country &country, const Position &position, const Stats &stats);

    Stats getStats() const;
    Country getCountry() const;
    std::string getName() const;
    Position getPosition() const;

    std::string toString() const;

  private:
    Stats stats;
    Country country;
    std::string name;
    Position position;
  };
}

#endif