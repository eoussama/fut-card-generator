#include "font_type.hpp"

namespace Card
{
  namespace Template
  {
    namespace Font
    {
      std::string typeToString(const Type &type)
      {
        switch (type)
        {
        case Type::OTF:
          return "otf";
        case Type::TTF:
          return "ttf";
        default:
          return "Unknown";
        }
      }
    }
  }
}