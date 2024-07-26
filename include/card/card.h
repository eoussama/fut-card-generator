#ifndef CARD_H
#define CARD_H

#include "stats.h"
#include "player.h"
#include "language.h"
#include "dimentions.h"
#include "card_edition.h"
#include "card_template.h"

class Card
{
public:
  Card(const Player::Base &player, const Player::Stats &stats, const Language &language, CardEdition const &edition, const CardTemplateName &templateName);
  static Card create(CardEdition const &edition, CardTemplateName const &templateName, Language const &language, const std::string &name, const std::string &club, const std::string &country, const Player::Position &position, unsigned short int pace, unsigned short int passing, unsigned short int physical, unsigned short int shooting, unsigned short int dribbling, unsigned short int defending);

  Language getLanguage() const;
  CardEdition getEdition() const;
  Player::Stats getStats() const;
  Player::Base getPlayer() const;
  CardTemplateName getTemplateName() const;

  std::string toString() const;

private:
  Language language;
  CardEdition edition;
  Player::Stats stats;
  Player::Base player;
  CardTemplateName templateName;
};

#endif