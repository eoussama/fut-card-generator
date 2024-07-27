#ifndef TEMPLATOR_H
#define TEMPLATOR_H

#include <opencv2/opencv.hpp>

#include "card.hpp"
#include "font/font_target.hpp"

namespace Core
{
  namespace Templator
  {
    cv::Mat loadBackground(Card::Template::Base tmplate);
    void loadFont(Card::Template::Base tmplate);
  }
}

#endif