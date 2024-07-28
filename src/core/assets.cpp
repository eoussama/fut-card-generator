#include "assets.hpp"

namespace Core
{
  namespace Assets
  {
    cv::Mat loadImage(std::string path)
    {
      cv::Mat image = cv::imread(path, cv::IMREAD_COLOR);

      if (image.empty())
      {
        std::cerr << "Error: Could not load image from " << path << std::endl;
        return cv::Mat();
      }

      if (image.type() != CV_8UC3 || image.channels() != 3 || image.dims != 2)
      {
        std::cerr << "Error: Image does not meet the required properties" << std::endl;
        return cv::Mat();
      }

      return image;
    }

    cv::Mat loadBackground(Template::Base tmplate, Card::Edition const &edition)
    {
      std::string templatePath = tmplate.getBackgroundPath(edition);
      cv::Mat image = loadImage(templatePath);

      return image;
    }

    cv::Mat loadFlag(Player::Country const &country)
    {
      std::string templatePath = "assets/nations/flags/" + countryToString(country) + ".png";
      cv::Mat image = loadImage(templatePath);

      return image;
    }

    Template::Font::Buffers loadFonts(Template::Base tmplate, Card::Edition const &edition)
    {
      Template::Font::Buffers buffer;
      Template::Font::Fonts fonts = Template::Font::init();
      Template::Font::Target target = fonts[tmplate.fonts];

      buffer.name = loadFont(target.name, edition);
      buffer.value = loadFont(target.value, edition);
      buffer.label = loadFont(target.label, edition);
      buffer.overall = loadFont(target.overall, edition);
      buffer.position = loadFont(target.position, edition);

      return buffer;
    }

    Template::Font::Buffer loadFont(Template::Font::Base font, Card::Edition const &edition)
    {
      std::string fontPath = Template::Font::getPath(font, edition);
      cv::Ptr<cv::freetype::FreeType2> ft2;

      try
      {
        ft2 = cv::freetype::createFreeType2();
        ft2->loadFontData(fontPath, 0);
      }
      catch (const cv::Exception &e)
      {
        std::cerr << "Error: Could not load font from " << fontPath << std::endl;
        std::cerr << e.what() << std::endl;
      }

      return {font.size, ft2};
    }
  }
}