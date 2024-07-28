#ifndef FONT_CODE_HPP
#define FONT_CODE_HPP

#include <string>

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

#endif