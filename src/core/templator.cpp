#include "templator.hpp"

namespace Core
{
  namespace Templator
  {
    cv::Mat loadBackground(Card::Template::Base tmplate)
    {
      std::string templatePath = tmplate.getBackgroundPath(Card::Edition::FIFA19);
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

    void loadFont(Card::Template::Base tmplate)
    {
      using namespace Card::Template;

      Font::Fonts fonts = Font::init();
      Font::Target target = fonts[tmplate.fonts];


      // std::string fontPath = "assets/bgs/19/fonts/DINPro-CondMedium.otf";
      // cv::Ptr<cv::freetype::FreeType2> ft2;
      // try
      // {
      //   ft2 = cv::freetype::createFreeType2();
      //   ft2->loadFontData(fontPath, 0);
      // }
      // catch (const cv::Exception &e)
      // {
      //   std::cerr << "Error: Could not load font from " << fontPath << std::endl;
      //   std::cerr << e.what() << std::endl;
      //   return -1;
      // }

      // std::string text = card.getPlayer().getName();
      // int fontHeight = 30;

      // Card::Template::Color::Base primary = tmplate.colors.first;
      // Card::Template::Color::Base secondary = tmplate.colors.second;

      // cv::Scalar color(std::get<0>(primary.getRGB()), std::get<1>(primary.getRGB()), std::get<2>(primary.getRGB()), 255);
      // cv::Point textOrg(50, 50);

      // try
      // {
      //   ft2->putText(image, text, textOrg, fontHeight, color, cv::FILLED, cv::LINE_AA, true);
      // }
    }
  }
}