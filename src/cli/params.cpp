#include "cli/params.hpp"

namespace Cli
{
  std::string Params::toString() const
  {
    return "Params(Name: " + name + ", Language: " + languageToString(language) + ", Logo: " + logo + ", Image: " + image + ", Position: " + positionToString(position) + ", Country: " + countryToString(country) + ", Stats: " + stats.toString() + ")";
  }
}