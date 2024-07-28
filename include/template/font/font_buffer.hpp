#ifndef FONT_BUFFER_HPP
#define FONT_BUFFER_HPP

#include <opencv2/freetype.hpp>

#include "template/font/font.hpp"

namespace Template
{
  namespace Font
  {
    typedef cv::Ptr<cv::freetype::FreeType2> FontBuffer;

    struct Buffer
    {
      Size size;
      FontBuffer buffer;
    };
  }
}

#endif