#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/freetype.hpp>

#include "generator.hpp"
#include "card/template/template.hpp"

namespace Generator
{
  bool generate(Card::Base card)
  {
    std::cout << card.toString() << std::endl;

    Card::Template::Base tmplate = card.getTemplate();
    std::string templatePath = tmplate.getBackgroundPath(Card::Edition::FIFA19);

    // auto x = tmplate.colors;
    // auto y = std::get<0>(x);
    // std::cout << std::get<0>(y) << std::endl;

    cv::Mat image = cv::imread(templatePath, cv::IMREAD_COLOR);

    if (image.empty())
    {
      std::cerr << "Error: Could not load image from " << templatePath << std::endl;
      return -1;
    }

    if (image.type() != CV_8UC3 || image.channels() != 3 || image.dims != 2)
    {
      std::cerr << "Error: Image does not meet the required properties" << std::endl;
      return -1;
    }

    std::string fontPath = "assets/bgs/19/fonts/DINPro-CondMedium.otf";
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
      return -1;
    }

    std::string text = card.getPlayer().getName();
    int fontHeight = 30;
    cv::Scalar color(255, 255, 255, 255);
    cv::Point textOrg(50, 50);

    try
    {
      ft2->putText(image, text, textOrg, fontHeight, color, cv::FILLED, cv::LINE_AA, true);
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
    compression_params.push_back(0); // Max compression level

    bool result = cv::imwrite(outputImagePath, image, compression_params);

    if (!result)
    {
      std::cerr << "Error: Could not save the image to " << outputImagePath << std::endl;
      return -1;
    }

    return true;
  }
}
