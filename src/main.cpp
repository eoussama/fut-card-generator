#include <iostream>

#include "card.hpp"
#include "player.hpp"
#include "generator.hpp"

int main(int argc, char *argv[])
{
  // TODO: Add a CLI parser
  // TODO: transparency
  // TODO: capitalization of names and labels
  // TODO: download image
  // TODO: translation

  cv::Mat image = Core::Assets::loadImage("person.png");
  Card::Base card = Card::create(Card::Edition::FIFA19, Template::Code::COMMON_BRONZE, "John Doe", Player::Country::VI, Player::Position::RB, image, 46, 60, 91, 83, 65, 78);

  cv::Mat clubLogo = Core::Assets::loadImage("assets/clubs/1.png");
  cv::Mat out = Core::Generator::generate(card, clubLogo);

  Core::Generator::show(out);
  Core::Generator::save(out, "./out.png");

  // TODO: Cleanup

  return 0;
}