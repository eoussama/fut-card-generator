#include <iostream>

#include "cli.hpp"
#include "card.hpp"
#include "player.hpp"
#include "generator.hpp"

int main(int argc, char *argv[])
{
  // TODO: Clean up
  // TODO: Read version
  // TODO: Small letter name positioning problem

  Cli::Params params = Cli::init(argc, argv);

  // cv::Mat image = Core::Assets::loadImage(imagePath);
  // cv::Mat clubLogo = Core::Assets::loadImage(clubLogoPath);
  // Player::Country country = Player::stringToCountry(countryCode);
  // Player::Position position = Player::stringToPosition(positionCode);

  // Card::Base card = Card::create(Card::Edition::FIFA19, Template::Code::COMMON_BRONZE, name, country, position, image, stats.at(0), stats.at(1), stats.at(2), stats.at(3), stats.at(4), stats.at(5));
  // cv::Mat out = Core::Generator::generate(card, clubLogo, Core::I18N::Language::IT);

  // Core::Generator::show(out);
  // Core::Generator::save(out, "./out.png");

  return 0;
}