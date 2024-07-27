#ifndef FONT_BUFFERS_H
#define FONT_BUFFERS_H

#include <string>
#include <vector>

#include "font_buffer.hpp"

namespace Card
{
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
}

#endif