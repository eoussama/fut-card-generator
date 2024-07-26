#include "player.h"
#include "position.h"

Player::Player::Player(const std::string &name, const std::string &club, const std::string &country, const Position &position, const Stats &stats)
    : name(name), club(club), country(country), position(position), stats(stats)
{
}

std::string Player::Player::getName() const { return name; }
std::string Player::Player::getClub() const { return club; }
Player::Stats Player::Player::getStats() const { return stats; }
std::string Player::Player::getCountry() const { return country; }
Player::Position Player::Player::getPosition() const { return position; }

std::string Player::Player::toString() const
{
  return "Player(Name: " + name + ", Club: " + club + ", Country: " + country + ", Position: " + getPositionName(position) + ", Stats: " + stats.toString() + ")";
}