#include <iostream>

#include "card.hpp"
#include "player.hpp"
#include "generator.hpp"

int main(int argc, char *argv[])
{
  // TODO: Add a CLI parser
  // TODO: player pic
  // TODO: translation

  Card::Base card = Card::create(Card::Edition::FIFA19, Template::Code::COMMON_BRONZE, "Kcag", Player::Country::MA, Player::Position::ST, 96, 80, 94, 96, 88, 60);

  cv::Mat clubLogo = Core::Assets::loadImage("assets/clubs/1.png");
  cv::Mat image = Core::Generator::generate(card, clubLogo);

  Core::Generator::show(image);
  Core::Generator::save(image, "./out.png");

  // TODO: Cleanup

  return 0;
}