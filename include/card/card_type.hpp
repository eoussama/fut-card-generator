#ifndef CARD_TYPE_H
#define CARD_TYPE_H

#include <string>

namespace Card
{
  enum class Type
  {
    STANDARD = 1,
    UCL
  };

  std::string typeToString(const Type &type);
}

#endif