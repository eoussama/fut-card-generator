#ifndef FONT_BUFFER_H
#define FONT_BUFFER_H

#include <opencv2/freetype.hpp>

namespace Card
{
  namespace Template
  {
    namespace Font
    {
      typedef cv::Ptr<cv::freetype::FreeType2> FontBuffer;

      struct Buffer {
        Size size;
        FontBuffer buffer;
      };
    }
  }
}

#endif