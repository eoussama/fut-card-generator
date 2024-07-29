#include <iostream>

#include "card.hpp"
#include "player.hpp"
#include "generator.hpp"

int main(int argc, char *argv[])
{
  // TODO: Cleanup
  // TODO: CLI
  // TODO: GUI

  cv::Mat image = Core::Assets::loadImage("person.png");
  cv::Mat clubLogo = Core::Assets::loadImage("assets/clubs/1.png");

  int i = 1;

  while (true)
  {
    i %= (int)Template::Code::LEGEND;
    i++;

    Card::Base card = Card::create(Card::Edition::FIFA19, (Template::Code)i, "John Doe", Player::Country::MA, Player::Position::ALL, image, 46, 60, 91, 83, 65, 78);
    cv::Mat out = Core::Generator::generate(card, clubLogo, Core::I18N::Language::IT);

    Core::Generator::show(out);
    Core::Generator::save(out, "./out.png");
  }

  return 0;
}