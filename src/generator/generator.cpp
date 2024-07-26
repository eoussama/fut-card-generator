#include <iostream>
#include <opencv2/opencv.hpp>

#include "generator.hpp"

namespace Generator
{
  bool generate(Card::Base card)
  {
    std::cout << card.toString() << std::endl;

    // Path to the input image
    std::string inputImagePath = "assets/bgs/19/cards/award_winner.png";
    // Path to the output image
    std::string outputImagePath = ".";

    // Read the image
    cv::Mat image = cv::imread(inputImagePath, cv::IMREAD_COLOR);

    // Check if the image was loaded successfully
    if (image.empty())
    {
      std::cerr << "Error: Could not open or find the image at " << inputImagePath << std::endl;
      return -1;
    }

    // Optionally, display the image
    cv::imshow("Input Image", image);
    cv::waitKey(0); // Wait for a key press

    // Save the image to the output path
    bool result = cv::imwrite(outputImagePath, image);

    // Check if the image was saved successfully
    if (!result)
    {
      std::cerr << "Error: Could not save the image to " << outputImagePath << std::endl;
      return -1;
    }

    std::cout << "Image successfully saved to " << outputImagePath << std::endl;

    return true;
  }
}
