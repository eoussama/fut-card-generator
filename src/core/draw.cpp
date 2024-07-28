#include "draw.hpp"

namespace Core
{
  namespace Draw
  {
    void player(Card::Base card, Template::Base tmplate, Template::Font::Buffers fonts, Template::Dimentions::Base dimentions, cv::Mat image)
    {
      playerName(card, tmplate, fonts, dimentions, image);
      playerPosition(card, tmplate, fonts, dimentions, image);
    }

    void playerName(Card::Base card, Template::Base tmplate, Template::Font::Buffers fonts, Template::Dimentions::Base dimentions, cv::Mat image)
    {
      std::string text = card.getPlayer().getName();
      Template::Color::Base color = tmplate.colors.first;

      Template::Font::Buffer font = fonts.name;
      cv::Size size = font.buffer->getTextSize(text, font.size, -1, nullptr);

      int x = (image.cols - size.width) / 2;
      int y = dimentions.topMarginName;
      cv::Point position = {x, y};

      Ink::write(text, color, font, position, image);
    }

    void playerPosition(Card::Base card, Template::Base tmplate, Template::Font::Buffers fonts, Template::Dimentions::Base dimentions, cv::Mat image)
    {
      std::string text = positionToString(card.getPlayer().getPosition());
      Template::Color::Base color = tmplate.colors.first;

      Template::Font::Buffer font = fonts.position;
      cv::Size size = font.buffer->getTextSize(text, font.size, -1, nullptr);

      int x = dimentions.leftMargin + 50 - (size.width / 2);
      int y = dimentions.topMarginPosition;
      cv::Point position = {x, y};

      Ink::write(text, color, font, position, image);
    }

    void stats()
    {
    }
  }
}