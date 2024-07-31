#ifndef LANGUAGE_HPP
#define LANGUAGE_HPP

#include <string>

namespace Core
{
  namespace I18N
  {
    enum class Language
    {
      UNKNOWN = 0,
      EN,
      FR,
      ES,
      DE,
      IT,
      PT
    };

    std::string languageToString(const Language &language);
    Language stringToLanguage(const std::string &language);
  }
}

#endif