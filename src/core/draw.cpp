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
      Template::Color::Base color = tmplate.colors.second;

      Template::Font::Buffer font = fonts.name;
      cv::Size size = font.buffer->getTextSize(text, font.size, -1, nullptr);

      int x = (image.cols - size.width) / 2;
      int y = dimentions.topMarginName + size.height;
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
      int y = dimentions.topMarginPosition + size.height;
      cv::Point position = {x, y};

      Ink::write(text, color, font, position, image);
    }

    void stats(Card::Base card, Template::Base tmplate, Template::Font::Buffers fonts, Template::Dimentions::Base dimentions, cv::Mat image)
    {
      statsPace(card, tmplate, fonts, dimentions, image);
      statsOverall(card, tmplate, fonts, dimentions, image);
    }

    void statsOverall(Card::Base card, Template::Base tmplate, Template::Font::Buffers fonts, Template::Dimentions::Base dimentions, cv::Mat image)
    {
      std::string text = std::to_string(card.getStats().getOverall());
      Template::Color::Base color = tmplate.colors.first;

      Template::Font::Buffer font = fonts.overall;
      cv::Size size = font.buffer->getTextSize(text, font.size, -1, nullptr);

      int x = dimentions.leftMarginOverall;
      int y = dimentions.topMarginPlayerOverall + size.height;
      cv::Point position = {x, y};

      Ink::write(text, color, font, position, image);
    }

    void statsPace(Card::Base card, Template::Base tmplate, Template::Font::Buffers fonts, Template::Dimentions::Base dimentions, cv::Mat image)
    {
      std::string valueText = std::to_string(card.getStats().getPace());
      Template::Color::Base valueColor = tmplate.colors.second;

      Template::Font::Buffer valueFont = fonts.value;

      int valueX = dimentions.leftMarginAttrValueCol1;
      int valueY = dimentions.topMarginStatsRow1Values;
      cv::Point valuePosition = {valueX, valueY};

      Ink::write(valueText, valueColor, valueFont, valuePosition, image);

      std::string labelText = "PAC";
      Template::Color::Base labelColor = tmplate.colors.second;

      Template::Font::Buffer labelFont = fonts.label;

      int labelX = dimentions.leftMarginAttrLabelCol1;
      int labelY = dimentions.topMarginStatsRow1Labels;
      cv::Point labelPosition = {labelX, labelY};

      Ink::write(labelText, labelColor, labelFont, labelPosition, image);
    }
  }
}