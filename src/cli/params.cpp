#include "cli/params.hpp"

namespace Cli
{
  std::string Params::toString() const
  {
    return "Params(Name: " + name + ", Language: " + languageToString(language) + ", Type: " + Template::toString(type) + ", Edition: " + editionToString(edition) + ", Logo: " + logo + ", Image: " + image + " Out: " + out + ", Position: " + positionToString(position) + ", Country: " + countryToString(country) + ", Stats: " + stats.toString() + ")";
  }
}