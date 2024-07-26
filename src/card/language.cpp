#include "language.h"

std::string getLanguageCode(const Language &language)
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