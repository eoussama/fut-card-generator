#ifndef CARD_H
#define CARD_H

#include "stats.h"
#include "player.h"
#include "language.h"
#include "card_edition.h"
#include "card_template.h"
#include "card_dimentions.h"

class Card
{
public:
  Card(const Player &player, const Stats &stats, const Language &language, CardEdition const &cardEdition, const CardTemplate &cardType);
  static Card create(CardEdition const &cardEdition, CardTemplate const &cardType, Language const &language, const std::string &name, const std::string &club, const std::string &country, const Position &position, unsigned short int pace, unsigned short int passing, unsigned short int physical, unsigned short int shooting, unsigned short int dribbling, unsigned short int defending);

  Stats getStats() const;
  CardTemplate getType() const;
  Player getPlayer() const;
  Language getLanguage() const;
  CardEdition getEdition() const;
  CardDimentions getDimentions() const;

  std::string toString() const;

private:
  Stats stats;
  Player player;
  CardTemplate type;
  Language language;
  CardEdition edition;
  CardDimentions dimentions;
};

#endif