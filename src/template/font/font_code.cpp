#include "font_code.hpp"

namespace Template
{
  namespace Font
  {
    std::string fontToString(const Code &name)
    {
      switch (name)
      {
      case Code::DIN_PRO_COND:
        return "Din Pro Cond";
      case Code::CHAMPIONS:
        return "Champions";
      default:
        return "Unknown";
      }
    }
  }
}