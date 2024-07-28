#include <iostream>
#include <tuple>

#include <opencv2/opencv.hpp>
#include <opencv2/freetype.hpp>

#include "generator.hpp"
#include "templator.hpp"
#include "template/template.hpp"

namespace Core
{
  namespace Generator
  {
    bool generate(Card::Base card)
    {
      Template::Base tmplate = card.getTemplate();
      Template::Dimentions::Base dimentions = Template::Dimentions::Base::fromTemplate(tmplate);

      cv::Mat image = Templator::loadBackground(tmplate, card.getEdition());
      Template::Font::Buffers fonts = Templator::loadFonts(tmplate, card.getEdition());

      try
      {
        int fontHeight = fonts.name.size;
        std::string text = card.getPlayer().getName();

        Template::Color::Base primary = tmplate.colors.first;
        Template::Color::Base secondary = tmplate.colors.second;

        cv::Scalar color(std::get<0>(primary.getRGB()), std::get<1>(primary.getRGB()), std::get<2>(primary.getRGB()), 255);
        cv::Point textOrg(dimentions.leftMargin, dimentions.topMarginName);

        fonts.name.buffer->putText(image, text, textOrg, fontHeight, color, cv::FILLED, cv::LINE_AA, true);
      }
      catch (const cv::Exception &e)
      {
        std::cerr << "Error: Could not put text on image" << std::endl;
        std::cerr << e.what() << std::endl;
        return -1;
      }

      cv::imshow("Input Image", image);
      cv::waitKey(0);

      std::string outputImagePath = "./out.png";

      std::vector<int> compression_params;
      compression_params.push_back(cv::IMWRITE_PNG_COMPRESSION);
      compression_params.push_back(9);

      bool result = cv::imwrite(outputImagePath, image, compression_params);

      if (!result)
      {
        std::cerr << "Error: Could not save the image to " << outputImagePath << std::endl;
        return -1;
      }

      return true;
    }
  }
}