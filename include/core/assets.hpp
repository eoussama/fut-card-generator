#ifndef ASSETS_HPP
#define ASSETS_HPP

#include <opencv2/opencv.hpp>
#include <opencv2/freetype.hpp>

#include "card.hpp"
#include "font/font_target.hpp"
#include "font/font_buffers.hpp"

namespace Core
{
  namespace Assets
  {
    cv::Mat loadImage(std::string path);
    cv::Mat loadFlag(Player::Country const &country);
    cv::Mat loadBackground(Template::Base tmplate, Card::Edition const &edition);
    Template::Font::Buffers loadFonts(Template::Base tmplate, Card::Edition const &edition);
    Template::Font::Buffer loadFont(Template::Font::Base font, Card::Edition const &edition);
  }
}

#endif