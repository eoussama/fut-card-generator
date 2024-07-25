#include "card.h"

Card::Card(const Player &player, const Stats &stats, const Language &language, const CardType &cardType)
    : stats(stats), player(player), language(language), cardType(cardType)
{
}

Stats Card::getStats() const { return stats; }
Player Card::getPlayer() const { return player; }
CardType Card::getCardType() const { return cardType; }
Language Card::getLanguage() const { return language; }

std::string Card::toString() const
{
  return "Card(Player: " + player.toString() + ", Stats: " + stats.toString() + ", Language: " + getLanguageCode(language) + ", CardType: " + getCardName(cardType) + ")";
}