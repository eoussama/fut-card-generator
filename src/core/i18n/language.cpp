#include "core/i18n/language.hpp"

namespace Core
{
  namespace I18N
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

    Language stringToLanguage(const std::string &language)
    {
      if (language == "en")
        return Language::EN;
      else if (language == "fr")
        return Language::FR;
      else if (language == "es")
        return Language::ES;
      else if (language == "de")
        return Language::DE;
      else if (language == "it")
        return Language::IT;
      else if (language == "pt")
        return Language::PT;
      else
        return Language::EN;
    }
  }
}