#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
public:
  Player(const std::string &name, const std::string &club, const std::string &country);

  std::string getName() const;
  std::string getClub() const;
  std::string getCountry() const;

  std::string toString() const;

private:
  std::string name;
  std::string club;
  std::string country;
};

#endif