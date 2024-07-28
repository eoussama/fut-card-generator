#include <iostream>

#include "card.hpp"
#include "player.hpp"
#include "generator.hpp"

int main(int argc, char *argv[])
{
  // TODO: Add a CLI parser
  // TODO: player pic
  // TODO: capitalization of names and labels
  // TODO: download image
  // TODO: translation

  Card::Base card = Card::create(Card::Edition::FIFA19, Template::Code::COMMON_BRONZE, "John Doe", Player::Country::VI, Player::Position::RB, 46, 60, 91, 83, 65, 78);

  cv::Mat clubLogo = Core::Assets::loadImage("assets/clubs/1.png");
  cv::Mat image = Core::Generator::generate(card, clubLogo);

  Core::Generator::show(image);
  Core::Generator::save(image, "./out.png");

  // TODO: Cleanup

  return 0;
}