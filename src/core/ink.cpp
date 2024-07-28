#include "ink.hpp"

namespace Core
{
  namespace Ink
  {
    void write(std::string text, Template::Color::Base color, Template::Font::Buffer font, cv::Point position, cv::Mat image)
    {
      try
      {
        Template::Color::Channel r = std::get<0>(color.getRGB());
        Template::Color::Channel g = std::get<1>(color.getRGB());
        Template::Color::Channel b = std::get<2>(color.getRGB());
        cv::Scalar color(r, g, b, 255);

        font.buffer->putText(image, text, position, font.size, color, cv::FILLED, cv::LINE_AA, true);
      }
      catch (const cv::Exception &e)
      {
        std::cerr << "Error: Could not put text on image" << std::endl;
        std::cerr << e.what() << std::endl;
      }
    }

    void line(cv::Mat image, cv::Point start, cv::Point end, Template::Color::Base color)
    {
      Template::Color::Channel r = std::get<0>(color.getRGB());
      Template::Color::Channel g = std::get<1>(color.getRGB());
      Template::Color::Channel b = std::get<2>(color.getRGB());
      cv::Scalar lineColor(r, g, b, 255);

      cv::line(image, start, end, lineColor, 1);
    }
  }
}