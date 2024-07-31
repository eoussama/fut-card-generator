#include <iostream>

#include "cli.hpp"
#include "generator.hpp"

int main(int argc, char *argv[])
{
  try
  {
    Cli::Params params = Cli::init(argc, argv);

    cv::Mat image = Core::Assets::loadImage(params.image);
    cv::Mat clubLogo = Core::Assets::loadImage(params.logo);

    Card::Base card = Card::create(params.edition, params.type, params.name, params.country, params.position, image, params.stats.getPace(), params.stats.getPassing(), params.stats.getPhysical(), params.stats.getShooting(), params.stats.getDribbling(), params.stats.getDefending());
    cv::Mat out = Core::Generator::generate(card, clubLogo, params.language);

    Core::Generator::save(out, params.out);

    if (params.show)
    {
      Core::Generator::show(out);
    }

    return 0;
  }
  catch (const std::exception &e)
  {
    std::cerr << "[ERROR] " << e.what() << std::endl;
    return 1;
  }
}