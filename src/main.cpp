#include <iostream>

#include "card.hpp"
#include "player.hpp"
#include "generator.hpp"

int main(int argc, char *argv[])
{
  // TODO: Add a CLI parser
  // TODO: clean up transparency code
  // TODO: capitalization of names and labels
  // TODO: translation

  // cv::Mat image = Core::Assets::downloadImage("https://static.wefut.com/assets/images/fut22/playeravatars/custom/167792961.png");
  // cv::Mat clubLogo = Core::Assets::downloadImage("https://e1.pngegg.com/pngimages/565/268/png-clipart-real-madrid-logo-real-madrid-logo-thumbnail.png");

  cv::Mat image = Core::Assets::loadImage("person.png");
  cv::Mat clubLogo = Core::Assets::loadImage("assets/clubs/1.png");

  int i = 1;

  while (true)
  {
    i %= (int)Template::Code::LEGEND;
    i++;

    Card::Base card = Card::create(Card::Edition::FIFA19, (Template::Code)i, "John Doe", Player::Country::MA, Player::Position::CB, image, 46, 60, 91, 83, 65, 78);
    cv::Mat out = Core::Generator::generate(card, clubLogo);

    Core::Generator::show(out);
    Core::Generator::save(out, "./out.png");
  }

  // TODO: Cleanup

  return 0;
}