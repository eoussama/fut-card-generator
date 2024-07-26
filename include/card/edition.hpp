#ifndef EDITION_H
#define EDITION_H

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