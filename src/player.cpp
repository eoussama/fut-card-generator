#include "player.h"
#include "position.h"

Player::Player(const std::string &name, const std::string &club, const std::string &country)
    : name(name), club(club), country(country)
{
}

std::string Player::getName() const { return name; }
std::string Player::getClub() const { return club; }
std::string Player::getCountry() const { return country; }

std::string Player::toString() const
{
  return "Player(Name: " + name + ", Club: " + club + ", Country: " + country + ")";
}