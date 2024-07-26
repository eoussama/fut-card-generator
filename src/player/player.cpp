#include "player.h"
#include "position.h"

Player::Player(const std::string &name, const std::string &club, const std::string &country, const Position &position, const Stats &stats)
    : name(name), club(club), country(country), position(position), stats(stats)
{
}

Stats Player::getStats() const { return stats; }
std::string Player::getName() const { return name; }
std::string Player::getClub() const { return club; }
Position Player::getPosition() const { return position; }
std::string Player::getCountry() const { return country; }

std::string Player::toString() const
{
  return "Player(Name: " + name + ", Club: " + club + ", Country: " + country + ", Position: " + getPositionName(position) + ", Stats: " + stats.toString() + ")";
}