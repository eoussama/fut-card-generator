#ifndef TYPE_H
#define TYPE_H

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