#ifndef PLAYER_H
#define PLAYER_H

#include <string>

#include "stats.h"
#include "player.h"
#include "position.h"

namespace Player
{
  class Player
  {
  public:
    Player(const std::string &name, const std::string &club, const std::string &country, const Position &position, const Stats &stats);

    Stats getStats() const;
    std::string getName() const;
    std::string getClub() const;
    Position getPosition() const;
    std::string getCountry() const;

    std::string toString() const;

  private:
    Stats stats;
    std::string name;
    std::string club;
    std::string country;
    Position position;
  };
}

#endif