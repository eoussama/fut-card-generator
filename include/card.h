#ifndef CARD_H
#define CARD_H

#include "stats.h"
#include "player.h"
#include "language.h"
#include "card_type.h"
#include "card_edition.h"
#include "card_dimentions.h"

class Card
{
public:
  Card(const Player &player, const Stats &stats, const Language &language, CardEdition const &cardEdition, const CardType &cardType);
  static Card create(CardEdition const &cardEdition, CardType const &cardType, Language const &language, const std::string &name, const std::string &club, const std::string &country, const Position &position, unsigned short int pace, unsigned short int passing, unsigned short int physical, unsigned short int shooting, unsigned short int dribbling, unsigned short int defending);

  Stats getStats() const;
  Player getPlayer() const;
  Language getLanguage() const;
  CardType getCardType() const;
  CardDimentions getDimentions() const;
  CardEdition getCardEdition() const;

  std::string toString() const;

private:
  Stats stats;
  Player player;
  CardType cardType;
  Language language;
  CardDimentions dimention;
  CardEdition cardEdition;
};

#endif