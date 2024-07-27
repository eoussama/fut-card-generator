#ifndef FONT_H
#define FONT_H

#include <map>
#include <tuple>
#include <string>
#include <cstdint>

#include "fonts.hpp"
#include "font_code.hpp"
#include "font_type.hpp"

namespace Card
{
  namespace Template
  {
    namespace Font
    {
      typedef short int Size;

      struct Base
      {
        Base() = default;
        Base(std::string name, Type type, Size size);

        std::string name;
        Type type;
        Size size;
      };
    }
  }
}

#endif