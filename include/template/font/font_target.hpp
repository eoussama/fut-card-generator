#ifndef FONT_TARGET_HPP
#define FONT_TARGET_HPP

#include <string>
#include "font.hpp"

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
    std::string getPath(Base font, Card::Edition const &edition);
  }
}

#endif