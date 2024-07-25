#include "player.h"

Player::Player(const std::string &name, const std::string &club)
    : name(name), club(club)
{
}

std::string Player::getName() const { return name; }
std::string Player::getClub() const { return club; }

std::string Player::toString() const
{
  return "Player(Name: " + name + ", Club: " + club + ")";
}