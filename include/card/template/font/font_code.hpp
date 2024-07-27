#ifndef FONT_CODE_H
#define FONT_CODE_H

#include <string>

namespace Card
{
  namespace Template
  {
    namespace Font
    {
      enum class Code
      {
        DIN_PRO_COND = 1,
        CHAMPIONS
      };

      std::string fontToString(const Code &name);
    }
  }
}

#endif