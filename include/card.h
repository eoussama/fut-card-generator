#ifndef CARD_H
#define CARD_H

#include "stats.h"
#include "player.h"
#include "cardtype.h"
#include "language.h"

class Card
{
public:
  Card(const Player &player, const Stats &stats, const Language &language, const CardType &cardType);

  Stats getStats() const;
  Player getPlayer() const;
  Language getLanguage() const;
  CardType getCardType() const;

  std::string toString() const;

private:
  Stats stats;
  Player player;
  CardType cardType;
  Language language;
};

#endif