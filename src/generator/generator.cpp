#include <iostream>
#include <opencv2/opencv.hpp>

#include "generator.hpp"
#include "card/template/template.hpp"

namespace Generator
{
  bool generate(Card::Base card)
  {
    std::cout << card.toString() << std::endl;

    Card::Template::Base tmplate = card.getTemplate();
    std::string templatePath = tmplate.getBackgroundPath(Card::Edition::FIFA19);

    cv::Mat image = cv::imread(templatePath, cv::IMREAD_UNCHANGED);

    // cv::imshow("Input Image", image);
    // cv::waitKey(0);

    std::string outputImagePath = "./out.png";
    bool result = cv::imwrite(outputImagePath, image);

    return true;
  }
}
