#include "language.hpp"

namespace Card
{
  std::string languageToString(const Language &language)
  {
    switch (language)
    {
    case Language::EN:
      return "en";
    case Language::FR:
      return "fr";
    case Language::ES:
      return "es";
    case Language::DE:
      return "de";
    case Language::IT:
      return "it";
    case Language::PT:
      return "pt";
    default:
      return "Unknown";
    }
  }
}