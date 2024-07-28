#include "player.hpp"

namespace Player
{
  Base::Base(const std::string &name, Country const &country, const Position &position, const Stats &stats, const cv::Mat &image)
      : name(name), country(country), position(position), stats(stats), image(image)
  {
  }

  Stats Base::getStats() const { return stats; }
  cv::Mat Base::getImage() const { return image; }
  std::string Base::getName() const { return name; }
  Country Base::getCountry() const { return country; }
  Position Base::getPosition() const { return position; }

  std::string Base::toString() const
  {
    return "Player(Name: " + name + ", Country: " + countryToString(country) + ", Position: " + positionToString(position) + ", Stats: " + stats.toString() + ")";
  }
}