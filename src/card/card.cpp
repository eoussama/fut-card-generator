#include "card.hpp"

namespace Card
{
  Base::Base(const Player::Base &player, const Player::Stats &stats, const Language &language, const Edition &cardEdition, const TemplateName &templateName)
      : stats(stats), player(player), language(language), edition(cardEdition), templateName(templateName)
  {
  }

  Base Base::create(Edition const &edition, TemplateName const &templateName, Language const &language, const std::string &name, const std::string &club, const std::string &country, const Player::Position &position, unsigned short int pace, unsigned short int passing, unsigned short int physical, unsigned short int shooting, unsigned short int dribbling, unsigned short int defending)
  {
    Player::Stats stats(pace, passing, physical, shooting, dribbling, defending);
    Player::Base player(name, club, country, position, stats);
    Base card(player, stats, language, edition, templateName);

    return card;
  }

  Player::Stats Base::getStats() const { return stats; }
  Player::Base Base::getPlayer() const { return player; }
  Language Base::getLanguage() const { return language; }
  TemplateName Base::getTemplateName() const { return templateName; }

  std::string Base::toString() const
  {
    return "Card(Player: " + player.toString() + ", Stats: " + stats.toString() + ", Language: " + getLanguageCode(language) + ", Edition: " + getCardEditionName(edition) + ", Template: " + getTemplateNameStr(templateName) + ")";
  }
}