#ifndef LANGUAGE_HPP
#define LANGUAGE_HPP

#include <string>

namespace Card
{
  enum class Language
  {
    EN = 1,
    FR,
    ES,
    DE,
    IT,
    PT
  };

  std::string languageToString(const Language &language);
}

#endif