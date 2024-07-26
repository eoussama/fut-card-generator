#include "card.h"

Card::Card(const Player &player, const Stats &stats, const Language &language, const CardEdition &cardEdition, const CardTemplateName &templateName)
    : stats(stats), player(player), language(language), edition(cardEdition), templateName(templateName)
{
}

Card Card::create(CardEdition const &edition, CardTemplateName const &templateName, Language const &language, const std::string &name, const std::string &club, const std::string &country, const Position &position, unsigned short int pace, unsigned short int passing, unsigned short int physical, unsigned short int shooting, unsigned short int dribbling, unsigned short int defending)
{
  Stats stats(pace, passing, physical, shooting, dribbling, defending);
  Player player(name, club, country, position, stats);
  Card card(player, stats, language, edition, templateName);

  return card;
}

Stats Card::getStats() const { return stats; }
Player Card::getPlayer() const { return player; }
Language Card::getLanguage() const { return language; }
CardTemplateName Card::getTemplateName() const { return templateName; }

std::string Card::toString() const
{
  return "Card(Player: " + player.toString() + ", Stats: " + stats.toString() + ", Language: " + getLanguageCode(language) + ", Edition: " + getCardEditionName(edition) + ", Template: " + getTemplateNameStr(templateName) + ")";
}