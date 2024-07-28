#ifndef DRAW_HPP
#define DRAW_HPP

#include "ink.hpp"
#include "card.hpp"
#include "template/font/font_buffers.hpp"

namespace Core
{
  namespace Draw
  {
    void player(Card::Base card, Template::Base tmplate, Template::Font::Buffers fonts, Template::Dimentions::Base dimentions, cv::Mat image);
    void playerName(Card::Base card, Template::Base tmplate, Template::Font::Buffers fonts, Template::Dimentions::Base dimentions, cv::Mat image);
    void playerPosition(Card::Base card, Template::Base tmplate, Template::Font::Buffers fonts, Template::Dimentions::Base dimentions, cv::Mat image);

    void stats(Card::Base card, Template::Base tmplate, Template::Font::Buffers fonts, Template::Dimentions::Base dimentions, cv::Mat image);
    void statsOverall(Card::Base card, Template::Base tmplate, Template::Font::Buffers fonts, Template::Dimentions::Base dimentions, cv::Mat image);
  }
}

#endif