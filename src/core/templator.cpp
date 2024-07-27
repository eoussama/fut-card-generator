#include "templator.hpp"

namespace Core
{
  namespace Templator
  {
    cv::Mat loadBackground(Card::Template::Base tmplate, Card::Edition const &edition)
    {
      std::string templatePath = tmplate.getBackgroundPath(edition);
      cv::Mat image = cv::imread(templatePath, cv::IMREAD_COLOR);

      if (image.empty())
      {
        std::cerr << "Error: Could not load image from " << templatePath << std::endl;
        return cv::Mat();
      }

      if (image.type() != CV_8UC3 || image.channels() != 3 || image.dims != 2)
      {
        std::cerr << "Error: Image does not meet the required properties" << std::endl;
        return cv::Mat();
      }

      return image;
    }

    Card::Template::Font::Buffers loadFonts(Card::Template::Base tmplate, Card::Edition const &edition)
    {
      using namespace Card::Template;

      Font::Buffers buffer;
      Font::Fonts fonts = Font::init();
      Font::Target target = fonts[tmplate.fonts];

      buffer.name = loadFont(target.name, edition);
      buffer.value = loadFont(target.value, edition);
      buffer.label = loadFont(target.label, edition);
      buffer.overall = loadFont(target.overall, edition);
      buffer.position = loadFont(target.position, edition);

      return buffer;
    }

    Card::Template::Font::Buffer loadFont(Card::Template::Font::Base font, Card::Edition const &edition)
    {
      using namespace Card::Template;

      std::string fontPath = Font::getPath(font, edition);
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