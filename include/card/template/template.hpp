#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <map>
#include <tuple>
#include <string>

#include "font.hpp"
#include "color.hpp"
#include "card_type.hpp"
#include "edition.hpp"
#include "template_code.hpp"

namespace Card
{
  namespace Template
  {
    typedef std::pair<Color::Base, Color::Base> Colors;

    struct Base
    {
      Base() = default;

      Type type;
      Colors colors;
      Font::Code fonts;
      std::string background;

      std::string getBackgroundPath(Edition const &edition);
    };

    typedef std::map<Code, Base> Templates;

    Templates init();
  }
}

#endif