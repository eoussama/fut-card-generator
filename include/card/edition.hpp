#ifndef EDITION_HPP
#define EDITION_HPP

#include <string>

namespace Card
{
  enum class Edition
  {
    UNKNOWN = 0,
    FIFA19 = 19
  };

  std::string editionToString(const Edition &edition);
  Edition stringToEdition(const std::string &edition);
}

#endif