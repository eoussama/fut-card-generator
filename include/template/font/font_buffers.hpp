#ifndef FONT_BUFFERS_HPP
#define FONT_BUFFERS_HPP

#include <string>
#include <vector>

#include "font_buffer.hpp"

namespace Template
{
  namespace Font
  {
    struct Buffers
    {
      Buffers() = default;

      Buffer overall;
      Buffer position;
      Buffer name;
      Buffer value;
      Buffer label;
    };
  }
}

#endif