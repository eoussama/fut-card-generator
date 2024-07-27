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
  }
}