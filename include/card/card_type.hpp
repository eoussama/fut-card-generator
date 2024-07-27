#ifndef CARD_TYPE_HPP
#define CARD_TYPE_HPP

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