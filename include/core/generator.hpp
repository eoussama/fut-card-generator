#ifndef GENERATOR_HPP
#define GENERATOR_HPP

#include <tuple>
#include <string>
#include <iostream>

#include <opencv2/opencv.hpp>
#include <opencv2/freetype.hpp>

#include "card.hpp"
#include "templator.hpp"
#include "draw/draw.hpp"
#include "template/template.hpp"

namespace Core
{
  namespace Generator
  {
    void show(cv::Mat image);
    cv::Mat generate(Card::Base card);
    void save(cv::Mat image, std::string path);
  }
}

#endif