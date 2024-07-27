#ifndef FONT_TYPE_H
#define FONT_TYPE_H

#include <string>

namespace Card
{
  namespace Template
  {
    namespace Font
    {
      enum class Type
      {
        OTF = 1,
        TTF
      };

      std::string typeToString(const Type &type);
    }
  }
}

#endif