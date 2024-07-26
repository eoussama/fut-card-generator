#include "player.h"
#include "position.h"

Player::Base::Base(const std::string &name, const std::string &club, const std::string &country, const Position &position, const Stats &stats)
    : name(name), club(club), country(country), position(position), stats(stats)
{
}

std::string Player::Base::getName() const { return name; }
std::string Player::Base::getClub() const { return club; }
Player::Stats Player::Base::getStats() const { return stats; }
std::string Player::Base::getCountry() const { return country; }
Player::Position Player::Base::getPosition() const { return position; }

std::string Player::Base::toString() const
{
  return "Player(Name: " + name + ", Club: " + club + ", Country: " + country + ", Position: " + getPositionName(position) + ", Stats: " + stats.toString() + ")";
}