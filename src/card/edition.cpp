#include "edition.hpp"

namespace Card
{
  std::string editionToString(const Edition &edition)
  {
    switch (edition)
    {
    case Edition::FIFA19:
      return "FIFA19";
    default:
      return "Unknown";
    }
  }

  Edition stringToEdition(const std::string &edition)
  {
    if (edition == "fifa19")
      return Edition::FIFA19;
    else
      return Edition::UNKNOWN;
  }
}