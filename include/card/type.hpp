#ifndef CARDKIND_H
#define CARDKIND_H

#include <string>

namespace Card
{
  enum class Type
  {
    STANDARD = 1,
    UCL
  };

  std::string getCardKindName(const Type &type);
}

#endif