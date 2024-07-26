#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <map>
#include <string>

#include "type.hpp"
#include "color.hpp"
#include "edition.hpp"
#include "template_name.hpp"

namespace Card
{
  namespace Template
  {
    struct Base
    {
      Base() = default;

      Type type;
      std::string background;
      std::tuple<Color::Base, Color::Base> colors;

      std::string getBackgroundPath(Edition const &edition);
    };

    typedef std::map<Code, Base> Templates;

    Templates init();
  }
}

#endif