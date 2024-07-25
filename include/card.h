#ifndef CARD_H
#define CARD_H

#include "stats.h"
#include "player.h"
#include "language.h"

class Card
{
public:
  Card(const Player &player, const Stats &stats, const Language &language);

  Stats getStats() const;
  Player getPlayer() const;
  Language getLanguage() const;

  std::string toString() const;

private:
  Stats stats;
  Player player;
  Language language;
};

#endif