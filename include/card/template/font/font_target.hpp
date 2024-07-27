#ifndef FONT_TARGET_H
#define FONT_TARGET_H

#include <string>
#include "font.hpp"

namespace Card
{
  namespace Template
  {
    namespace Font
    {
      struct Target
      {
        Target() = default;
        Target(Base overall, Base position, Base name, Base value, Base label);

        Base overall;
        Base position;
        Base name;
        Base value;
        Base label;
      };

      typedef std::map<Code, Target> Fonts;

      Fonts init();
    }
  }
}

#endif