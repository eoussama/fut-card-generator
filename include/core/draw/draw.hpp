#ifndef DRAW_HPP
#define DRAW_HPP

#include "ink.hpp"
#include "card.hpp"
#include "assets.hpp"
#include "i18n/translator.hpp"
#include "template/font/font_buffers.hpp"
#include "exceptions/invalidImageRegion.hpp"

namespace Core
{
  namespace Draw
  {
    class Base
    {
    public:
      Base(Card::Base card, Template::Base tmplate, Template::Font::Buffers fonts, Template::Dimentions::Base dimentions, cv::Mat clublogo, I18N::Translator translator, cv::Mat &image);

      void text();
      void lines();
      void images();

    private:
      cv::Mat &image;
      Card::Base card;
      cv::Mat clublogo;
      Template::Base tmplate;
      I18N::Translator translator;
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

      std::string formatStat(unsigned short int stat);
    };
  }
}

#endif