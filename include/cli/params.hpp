#ifndef PARAMS_HPP
#define PARAMS_HPP

#include <string>

#include "stats.hpp"
#include "country.hpp"
#include "edition.hpp"
#include "position.hpp"
#include "card_type.hpp"
#include "core/i18n/language.hpp"
#include "template/template_code.hpp"

namespace Cli
{
  struct Params
  {
    Params() = default;

    bool show;
    std::string out;
    std::string name;
    std::string logo;
    std::string image;
    Player::Stats stats;
    Template::Code type;
    Player::Country country;
    Card::Edition edition;
    Player::Position position;
    Core::I18N::Language language;

    std::string toString() const;
  };

}

#endif