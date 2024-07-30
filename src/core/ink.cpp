#include "ink.hpp"

namespace Core
{
  namespace Ink
  {
    void write(std::string text, Template::Color::Base color, Template::Font::Buffer font, cv::Point position, cv::Mat &image)
    {
      try
      {
        Template::Color::Channel r = std::get<0>(color.getRGB());
        Template::Color::Channel g = std::get<1>(color.getRGB());
        Template::Color::Channel b = std::get<2>(color.getRGB());

        cv::Scalar fontColor(r, g, b, 255);
        std::transform(text.begin(), text.end(), text.begin(), ::toupper);

        if (text.find_first_of("ÀÁÂÃÄÅÆÇÈÉÊËÌÍÎÏÐÑÒÓÔÕÖØÙÚÛÜÝÞßàáâãäåæçèéêëìíîïðñòóôõöøùúûüýþÿ") != std::string::npos)
          position.y -= 8;

        font.buffer->putText(image, text, position, font.size, fontColor, cv::FILLED, cv::LINE_AA, true);
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

    void add(cv::Mat image1, cv::Mat image2, cv::Point position)
    {
      cv::Mat region = image1(cv::Rect(position.x, position.y, image2.cols, image2.rows));

      for (int y = 0; y < image2.rows; ++y)
      {
        for (int x = 0; x < image2.cols; ++x)
        {
          cv::Vec4b &bgra1 = region.at<cv::Vec4b>(y, x);
          cv::Vec4b &bgra2 = image2.at<cv::Vec4b>(y, x);
          float alpha = bgra2[3] / 255.0;

          for (int c = 0; c < 3; ++c)
          {
            bgra1[c] = bgra1[c] * (1 - alpha) + bgra2[c] * alpha;
          }

          bgra1[3] = std::max(bgra1[3], bgra2[3]);
        }
      }
    }
  }
}