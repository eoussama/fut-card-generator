#ifndef DRAW_HPP
#define DRAW_HPP

#include "ink.hpp"
#include "card.hpp"
#include "template/font/font_buffers.hpp"

namespace Core
{
  namespace Draw
  {
    class Base
    {
    public:
      Base(Card::Base card, Template::Base tmplate, Template::Font::Buffers fonts, Template::Dimentions::Base dimentions, cv::Mat image);

      void player();
      void stats();
      void lines();

    private:
      cv::Mat image;
      Card::Base card;
      Template::Base tmplate;
      Template::Font::Buffers fonts;
      Template::Dimentions::Base dimentions;

      void playerName();
      void playerPosition();

      void statsPace();
      void statsOverall();
      void statsPassing();
      void statsShooting();
      void statsPhysical();
      void statsDribbling();
      void statsDefending();
    };
  }
}

#endif