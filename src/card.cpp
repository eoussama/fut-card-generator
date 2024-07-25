#include "card.h"

Card::Card(const Player &player, const Stats &stats, const Language &language)
    : stats(stats), player(player), language(language)
{
}

Stats Card::getStats() const { return stats; }
Player Card::getPlayer() const { return player; }
Language Card::getLanguage() const { return language; }

std::string Card::toString() const
{
  return "Card(Player: " + player.toString() + ", Stats: " + stats.toString() + ", Language: " + getLanguageCode(language) + ")";
}