#ifndef INK_HPP
#define INK_HPP

#include <string>
#include <opencv2/opencv.hpp>

#include "template/color/color.hpp"
#include "template/font/font_buffer.hpp"

namespace Core
{
  namespace Ink
  {
    void write(std::string text, Template::Color::Base color, Template::Font::Buffer font, cv::Point position, cv::Mat image);
  }
}

#endif