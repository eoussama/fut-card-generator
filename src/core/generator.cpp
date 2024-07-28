#include <iostream>
#include <tuple>

#include <opencv2/opencv.hpp>
#include <opencv2/freetype.hpp>

#include "ink.hpp"
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

      Ink::write(card.getPlayer().getName(), tmplate.colors.first, fonts.name, image);

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