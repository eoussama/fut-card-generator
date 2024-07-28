#ifndef CARD_HPP
#define CARD_HPP

#include "stats.hpp"
#include "player.hpp"
#include "edition.hpp"
#include "template.hpp"
#include "language.hpp"
#include "dimentions.hpp"

namespace Card
{
  class Base
  {
  public:
    Base(const Player::Base &player, const Player::Stats &stats, const Language &language, Edition const &edition, const Template::Code &templateCode);

    Language getLanguage() const;
    Edition getEdition() const;
    Player::Stats getStats() const;
    Player::Base getPlayer() const;
    Template::Base getTemplate() const;
    Template::Code getTemplateCode() const;

    std::string toString() const;

  private:
    Language language;
    Edition edition;
    Player::Stats stats;
    Player::Base player;
    Template::Code templateCode;
  };

  Base create(Edition const &edition, Template::Code const &templateCode, Language const &language, const std::string &name, const std::string &club, const Player::Country &country, const Player::Position &position, unsigned short int pace, unsigned short int passing, unsigned short int physical, unsigned short int shooting, unsigned short int dribbling, unsigned short int defending);
}

#endif