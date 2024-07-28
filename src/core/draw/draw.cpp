#include "draw/draw.hpp"

namespace Core
{
  namespace Draw
  {
    Base::Base(Card::Base card, Template::Base tmplate, Template::Font::Buffers fonts, Template::Dimentions::Base dimentions, cv::Mat image)
        : image(image), card(card), tmplate(tmplate), fonts(fonts), dimentions(dimentions)
    {
    }

    void Base::player()
    {
      this->playerName();
      this->playerPosition();
    }

    void Base::stats()
    {
      this->statsPace();
      this->statsOverall();
      this->statsPassing();
      this->statsShooting();
      this->statsPhysical();
      this->statsDribbling();
      this->statsDefending();
    }

    void Base::lines()
    {
      cv::Point start(this->dimentions.leftPointXCoordinateLineUnderPosition, this->dimentions.topMarginLineUnderPosition);
      cv::Point end(this->dimentions.rightPointXCoordinateLineUnderPosition, this->dimentions.topMarginLineUnderPosition);

      Ink::line(image, start, end, this->tmplate.colors.first);

      start = cv::Point(this->dimentions.leftPointXCoordinateLineUnderPosition, this->dimentions.topMarginLineUnderCountryFlag);
      end = cv::Point(this->dimentions.rightPointXCoordinateLineUnderPosition, this->dimentions.topMarginLineUnderCountryFlag);

      Ink::line(image, start, end, this->tmplate.colors.first);

      start = cv::Point(this->dimentions.marginLineUnderName, this->dimentions.topMarginLineUnderName);
      end = cv::Point(this->dimentions.marginLineUnderName, this->dimentions.topMarginLineUnderName);

      Ink::line(image, start, end, this->tmplate.colors.second);

      start = cv::Point(this->dimentions.marginLineUnderStats, this->dimentions.topMarginLineUnderStats);
      end = cv::Point(this->dimentions.marginLineUnderStats, this->dimentions.topMarginLineUnderStats);

      Ink::line(image, start, end, this->tmplate.colors.second);

      start = cv::Point(this->image.cols / 2, this->dimentions.topMarginVerticalLineBetweenStatsColumns);
      end = cv::Point(this->image.cols / 2, this->dimentions.bottomPointVerticalLineBetweenStatsColumns);

      Ink::line(image, start, end, this->tmplate.colors.second);
    }

    void Base::playerName()
    {
      std::string text = this->card.getPlayer().getName();
      Template::Color::Base color = this->tmplate.colors.second;

      Template::Font::Buffer font = this->fonts.name;
      cv::Size size = font.buffer->getTextSize(text, font.size, -1, nullptr);

      int x = (this->image.cols - size.width) / 2;
      int y = this->dimentions.topMarginName + size.height;
      cv::Point position = {x, y};

      Ink::write(text, color, font, position, image);
    }

    void Base::playerPosition()
    {
      std::string text = positionToString(this->card.getPlayer().getPosition());
      Template::Color::Base color = this->tmplate.colors.first;

      Template::Font::Buffer font = this->fonts.position;
      cv::Size size = font.buffer->getTextSize(text, font.size, -1, nullptr);

      int x = this->dimentions.leftMargin + 50 - (size.width / 2);
      int y = this->dimentions.topMarginPosition + size.height;
      cv::Point position = {x, y};

      Ink::write(text, color, font, position, image);
    }

    void Base::statsOverall()
    {
      std::string text = std::to_string(this->card.getStats().getOverall());
      Template::Color::Base color = this->tmplate.colors.first;

      Template::Font::Buffer font = this->fonts.overall;
      cv::Size size = font.buffer->getTextSize(text, font.size, -1, nullptr);

      int x = this->dimentions.leftMarginOverall;
      int y = this->dimentions.topMarginPlayerOverall + size.height;
      cv::Point position = {x, y};

      Ink::write(text, color, font, position, image);
    }

    void Base::statsPace()
    {
      std::string valueText = std::to_string(this->card.getStats().getPace());
      Template::Color::Base valueColor = this->tmplate.colors.second;

      Template::Font::Buffer valueFont = this->fonts.value;
      cv::Size valueSize = valueFont.buffer->getTextSize(valueText, valueFont.size, -1, nullptr);

      int valueX = this->dimentions.leftMarginAttrValueCol1;
      int valueY = this->dimentions.topMarginStatsRow1Values + valueSize.height;
      cv::Point valuePosition = {valueX, valueY};

      Ink::write(valueText, valueColor, valueFont, valuePosition, image);

      std::string labelText = "PAC";
      Template::Color::Base labelColor = this->tmplate.colors.second;

      Template::Font::Buffer labelFont = this->fonts.label;
      cv::Size labelSize = labelFont.buffer->getTextSize(labelText, labelFont.size, -1, nullptr);

      int labelX = this->dimentions.leftMarginAttrLabelCol1;
      int labelY = this->dimentions.topMarginStatsRow1Labels + labelSize.height;
      cv::Point labelPosition = {labelX, labelY};

      Ink::write(labelText, labelColor, labelFont, labelPosition, image);
    }

    void Base::statsShooting()
    {
      std::string valueText = std::to_string(this->card.getStats().getShooting());
      Template::Color::Base valueColor = this->tmplate.colors.second;

      Template::Font::Buffer valueFont = this->fonts.value;
      cv::Size valueSize = valueFont.buffer->getTextSize(valueText, valueFont.size, -1, nullptr);

      int valueX = this->dimentions.leftMarginAttrValueCol1;
      int valueY = this->dimentions.topMarginStatsRow2Values + valueSize.height;
      cv::Point valuePosition = {valueX, valueY};

      Ink::write(valueText, valueColor, valueFont, valuePosition, image);

      std::string labelText = "SHO";
      Template::Color::Base labelColor = this->tmplate.colors.second;

      Template::Font::Buffer labelFont = this->fonts.label;
      cv::Size labelSize = labelFont.buffer->getTextSize(labelText, labelFont.size, -1, nullptr);

      int labelX = this->dimentions.leftMarginAttrLabelCol1;
      int labelY = this->dimentions.topMarginStatsRow2Labels + labelSize.height;
      cv::Point labelPosition = {labelX, labelY};

      Ink::write(labelText, labelColor, labelFont, labelPosition, image);
    }

    void Base::statsPassing()
    {
      std::string valueText = std::to_string(this->card.getStats().getPassing());
      Template::Color::Base valueColor = this->tmplate.colors.second;

      Template::Font::Buffer valueFont = this->fonts.value;
      cv::Size valueSize = valueFont.buffer->getTextSize(valueText, valueFont.size, -1, nullptr);

      int valueX = this->dimentions.leftMarginAttrValueCol1;
      int valueY = this->dimentions.topMarginStatsRow3Values + valueSize.height;
      cv::Point valuePosition = {valueX, valueY};

      Ink::write(valueText, valueColor, valueFont, valuePosition, image);

      std::string labelText = "PAS";
      Template::Color::Base labelColor = this->tmplate.colors.second;

      Template::Font::Buffer labelFont = this->fonts.label;
      cv::Size labelSize = labelFont.buffer->getTextSize(labelText, labelFont.size, -1, nullptr);

      int labelX = this->dimentions.leftMarginAttrLabelCol1;
      int labelY = this->dimentions.topMarginStatsRow3Labels + labelSize.height;
      cv::Point labelPosition = {labelX, labelY};

      Ink::write(labelText, labelColor, labelFont, labelPosition, image);
    }

    void Base::statsDribbling()
    {
      std::string valueText = std::to_string(this->card.getStats().getDribbling());
      Template::Color::Base valueColor = this->tmplate.colors.second;

      Template::Font::Buffer valueFont = this->fonts.value;
      cv::Size valueSize = valueFont.buffer->getTextSize(valueText, valueFont.size, -1, nullptr);

      int valueX = this->dimentions.leftMarginAttrValueCol2;
      int valueY = this->dimentions.topMarginStatsRow1Values + valueSize.height;
      cv::Point valuePosition = {valueX, valueY};

      Ink::write(valueText, valueColor, valueFont, valuePosition, image);

      std::string labelText = "PAS";
      Template::Color::Base labelColor = this->tmplate.colors.second;

      Template::Font::Buffer labelFont = this->fonts.label;
      cv::Size labelSize = labelFont.buffer->getTextSize(labelText, labelFont.size, -1, nullptr);

      int labelX = this->dimentions.leftMarginAttrLabelCol2;
      int labelY = this->dimentions.topMarginStatsRow1Labels + labelSize.height;
      cv::Point labelPosition = {labelX, labelY};

      Ink::write(labelText, labelColor, labelFont, labelPosition, image);
    }

    void Base::statsDefending()
    {
      std::string valueText = std::to_string(this->card.getStats().getDefending());
      Template::Color::Base valueColor = this->tmplate.colors.second;

      Template::Font::Buffer valueFont = this->fonts.value;
      cv::Size valueSize = valueFont.buffer->getTextSize(valueText, valueFont.size, -1, nullptr);

      int valueX = this->dimentions.leftMarginAttrValueCol2;
      int valueY = this->dimentions.topMarginStatsRow2Values + valueSize.height;
      cv::Point valuePosition = {valueX, valueY};

      Ink::write(valueText, valueColor, valueFont, valuePosition, image);

      std::string labelText = "DEF";
      Template::Color::Base labelColor = this->tmplate.colors.second;

      Template::Font::Buffer labelFont = this->fonts.label;
      cv::Size labelSize = labelFont.buffer->getTextSize(labelText, labelFont.size, -1, nullptr);

      int labelX = this->dimentions.leftMarginAttrLabelCol2;
      int labelY = this->dimentions.topMarginStatsRow2Labels + labelSize.height;
      cv::Point labelPosition = {labelX, labelY};

      Ink::write(labelText, labelColor, labelFont, labelPosition, image);
    }

    void Base::statsPhysical()
    {
      std::string valueText = std::to_string(this->card.getStats().getPhysical());
      Template::Color::Base valueColor = this->tmplate.colors.second;

      Template::Font::Buffer valueFont = this->fonts.value;
      cv::Size valueSize = valueFont.buffer->getTextSize(valueText, valueFont.size, -1, nullptr);

      int valueX = this->dimentions.leftMarginAttrValueCol2;
      int valueY = this->dimentions.topMarginStatsRow3Values + valueSize.height;
      cv::Point valuePosition = {valueX, valueY};

      Ink::write(valueText, valueColor, valueFont, valuePosition, image);

      std::string labelText = "PHY";
      Template::Color::Base labelColor = this->tmplate.colors.second;

      Template::Font::Buffer labelFont = this->fonts.label;
      cv::Size labelSize = labelFont.buffer->getTextSize(labelText, labelFont.size, -1, nullptr);

      int labelX = this->dimentions.leftMarginAttrLabelCol2;
      int labelY = this->dimentions.topMarginStatsRow3Labels + labelSize.height;
      cv::Point labelPosition = {labelX, labelY};

      Ink::write(labelText, labelColor, labelFont, labelPosition, image);
    }
  }
}