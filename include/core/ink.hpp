#ifndef INK_HPP
#define INK_HPP

#include <string>
#include <cctype>
#include <algorithm>
#include <opencv2/opencv.hpp>

#include "template/color/color.hpp"
#include "template/font/font_buffer.hpp"

namespace Core
{
  namespace Ink
  {
    void add(cv::Mat image1, cv::Mat image2, cv::Point position);
    void line(cv::Mat image, cv::Point start, cv::Point end, Template::Color::Base color);
    void write(std::string text, Template::Color::Base color, Template::Font::Buffer font, cv::Point position, cv::Mat &image);
  }
}

#endif