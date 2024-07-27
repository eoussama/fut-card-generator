#ifndef TEMPLATOR_HPP
#define TEMPLATOR_HPP

#include <opencv2/opencv.hpp>
#include <opencv2/freetype.hpp>

#include "card.hpp"
#include "font/font_target.hpp"
#include "font/font_buffers.hpp"

namespace Core
{
  namespace Templator
  {
    cv::Mat loadBackground(Card::Template::Base tmplate, Card::Edition const &edition);
    Card::Template::Font::Buffers loadFonts(Card::Template::Base tmplate, Card::Edition const &edition);
    Card::Template::Font::Buffer loadFont(Card::Template::Font::Base font, Card::Edition const &edition);
  }
}

#endif