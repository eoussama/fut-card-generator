#include "card.hpp"

namespace Card
{
  Base::Base(const Player::Base &player, const Player::Stats &stats, const Edition &edition, const Template::Code &templateCode)
      : stats(stats), player(player), edition(edition), templateCode(templateCode)
  {
  }

  Edition Base::getEdition() const { return edition; }
  Player::Stats Base::getStats() const { return stats; }
  Player::Base Base::getPlayer() const { return player; }
  Template::Code Base::getTemplateCode() const { return templateCode; }
  Template::Base Base::getTemplate() const { return Template::init()[getEdition()][templateCode]; }

  std::string Base::toString() const
  {
    return "Card(Player: " + player.toString() + ", Stats: " + stats.toString() + ", Edition: " + editionToString(edition) + ", Template: " + Template::toString(templateCode) + ")";
  }

  Base create(Edition const &edition, Template::Code const &templateName, const std::string &name, const Player::Country &country, const Player::Position &position, cv::Mat image, unsigned short int pace, unsigned short int passing, unsigned short int physical, unsigned short int shooting, unsigned short int dribbling, unsigned short int defending)
  {
    Player::Stats stats(pace, passing, physical, shooting, dribbling, defending);
    Player::Base player(name, country, position, stats, image);
    Base card(player, stats, edition, templateName);

    return card;
  }
}