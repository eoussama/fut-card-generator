#ifndef DRAW_HPP
#define DRAW_HPP

#include "ink.hpp"
#include "card.hpp"
#include "assets.hpp"
#include "template/font/font_buffers.hpp"

namespace Core
{
  namespace Draw
  {
    class Base
    {
    public:
      Base(Card::Base card, Template::Base tmplate, Template::Font::Buffers fonts, Template::Dimentions::Base dimentions, cv::Mat clublogo, cv::Mat &image);

      void text();
      void lines();
      void images();

    private:
      cv::Mat &image;
      Card::Base card;
      cv::Mat clublogo;
      Template::Base tmplate;
      Template::Font::Buffers fonts;
      Template::Dimentions::Base dimentions;

      cv::Mat alpha;
      bool hasAlpha;

      void playerClub();
      void playerName();
      void playerImage();
      void playerCountry();
      void playerPosition();

      void statsPace();
      void statsOverall();
      void statsPassing();
      void statsShooting();
      void statsPhysical();
      void statsDribbling();
      void statsDefending();

      void removeAlpha();
      void restoreAlpha();
    };
  }
}

#endif