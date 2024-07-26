#ifndef LANGUAGE_H
#define LANGUAGE_H

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

  std::string getLanguageCode(const Language &language);
}

#endif