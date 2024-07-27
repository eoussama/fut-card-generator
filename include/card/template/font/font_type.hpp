#ifndef FONT_TYPE_HPP
#define FONT_TYPE_HPP

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