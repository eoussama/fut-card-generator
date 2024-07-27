#ifndef TEMPLATOR_H
#define TEMPLATOR_H

#include <opencv2/opencv.hpp>
#include <opencv2/freetype.hpp>

#include "card.hpp"
#include "font/font_target.hpp"
#include "font/font_buffers.hpp"

namespace Core
{
  namespace Templator
  {
    cv::Mat loadBackground(Card::Template::Base tmplate);
    Card::Template::Font::Buffers loadFonts(Card::Template::Base tmplate, Card::Edition const &edition); 
    Card::Template::Font::Buffer loadFont(Card::Template::Font::Base font, Card::Edition const &edition);
  }
}

#endif