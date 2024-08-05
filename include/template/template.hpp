#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <map>
#include <tuple>
#include <string>

#include "font.hpp"
#include "color.hpp"
#include "edition.hpp"
#include "card_type.hpp"
#include "template_code.hpp"

namespace Template
{
  typedef std::pair<Color::Base, Color::Base> Colors;

  struct Base
  {
    Base() = default;

    Card::Type type;
    Colors colors;
    Font::Code fonts;
    std::string background;

    std::string getBackgroundPath(Card::Edition const &edition);
  };

  typedef std::map<Code, Base> EditionTemplates;
  typedef std::map<Card::Edition, EditionTemplates> Templates;

  Templates init();
}

#endif