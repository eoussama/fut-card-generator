#include "card.h"

Card::Card(const Player &player, const Stats &stats, const Language &language, const CardEdition &cardEdition, const CardType &cardType)
    : stats(stats), player(player), language(language), edition(cardEdition), type(cardType)
{
  dimentions = CardDimentions::fromType(type);
}

Card Card::create(CardEdition const &cardEdition, CardType const &cardType, Language const &language, const std::string &name, const std::string &club, const std::string &country, const Position &position, unsigned short int pace, unsigned short int passing, unsigned short int physical, unsigned short int shooting, unsigned short int dribbling, unsigned short int defending)
{
  Stats stats(pace, passing, physical, shooting, dribbling, defending);
  Player player(name, club, country, position, stats);
  Card card(player, stats, language, cardEdition, cardType);

  return card;
}

Stats Card::getStats() const { return stats; }
Player Card::getPlayer() const { return player; }
CardType Card::getType() const { return type; }
Language Card::getLanguage() const { return language; }
CardDimentions Card::getDimentions() const { return dimentions; }

std::string Card::toString() const
{
  return "Card(Player: " + player.toString() + ", Stats: " + stats.toString() + ", Language: " + getLanguageCode(language) + ", Cardedition: " + getCardEditionName(edition) + ", CardType: " + getCardName(type) + ")";
}