#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "player.h"
#include "position.h"

class Player
{
public:
  Player(const std::string &name, const std::string &club, const std::string &country, const Position &position);

  std::string getName() const;
  std::string getClub() const;
  std::string getCountry() const;
  Position getPosition() const;

  std::string toString() const;

private:
  std::string name;
  std::string club;
  std::string country;
  Position position;
};

#endif