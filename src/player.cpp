#include "player.h"
#include "position.h"

Player::Player(const std::string &name, const std::string &club, const std::string &country, const Position &position)
    : name(name), club(club), country(country), position(position)
{
}

std::string Player::getName() const { return name; }
std::string Player::getClub() const { return club; }
std::string Player::getCountry() const { return country; }
Position Player::getPosition() const { return position; }

std::string Player::toString() const
{
  return "Player(Name: " + name + ", Club: " + club + ", Country: " + country + ", Position: " + getPositionName(position) + ")"; 
}