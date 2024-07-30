#ifndef PARAMS_HPP
#define PARAMS_HPP

#include <string>

#include "stats.hpp"
#include "country.hpp"
#include "position.hpp"
#include "core/i18n/language.hpp"

namespace Cli
{
  struct Params
  {
    Params() = default;

    std::string name;
    std::string logo;
    std::string image;
    Player::Stats stats;
    Player::Country country;
    Player::Position position;
    Core::I18N::Language language;

    std::string toString() const;
  };

}

#endif