#ifndef EDITION_HPP
#define EDITION_HPP

#include <string>

namespace Card
{
  enum class Edition
  {
    FIFA19 = 19
  };

  std::string editionToString(const Edition &edition);
}

#endif