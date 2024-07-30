#include <iostream>

#include "cli.hpp"
#include "card.hpp"
#include "player.hpp"
#include "generator.hpp"

int main(int argc, char *argv[])
{
  // TODO: Clean up
  // TODO: Account for accents

  Cli::Params params = Cli::init(argc, argv);
  std::cout << params.toString() << std::endl;

  cv::Mat image = Core::Assets::loadImage(params.image);
  cv::Mat clubLogo = Core::Assets::loadImage(params.logo);

  Card::Base card = Card::create(params.edition, params.type, params.name, params.country, params.position, image, params.stats.getPace(), params.stats.getPassing(), params.stats.getPhysical(), params.stats.getShooting(), params.stats.getDribbling(), params.stats.getDefending());
  cv::Mat out = Core::Generator::generate(card, clubLogo, params.language);

  Core::Generator::show(out);
  Core::Generator::save(out, params.out);

  return 0;
}