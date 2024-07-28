#include "player.hpp"

namespace Player
{
  Base::Base(const std::string &name, const std::string &club, Country const &country, const Position &position, const Stats &stats)
      : name(name), club(club), country(country), position(position), stats(stats)
  {
  }

  Stats Base::getStats() const { return stats; }
  std::string Base::getName() const { return name; }
  std::string Base::getClub() const { return club; }
  Country Base::getCountry() const { return country; }
  Position Base::getPosition() const { return position; }

  std::string Base::toString() const
  {
    return "Player(Name: " + name + ", Club: " + club + ", Country: " + countryToString(country) + ", Position: " + positionToString(position) + ", Stats: " + stats.toString() + ")";
  }
}