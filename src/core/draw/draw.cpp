#include "draw/draw.hpp"

namespace Core
{
  namespace Draw
  {
    Base::Base(Card::Base card, Template::Base tmplate, Template::Font::Buffers fonts, Template::Dimentions::Base dimentions, cv::Mat clublogo, cv::Mat &image)
        : image(image), card(card), tmplate(tmplate), fonts(fonts), dimentions(dimentions), clublogo(clublogo)
    {
    }

    void Base::removeAlpha()
    {
      this->hasAlpha = this->image.channels() == 4;

      if (this->hasAlpha)
      {
        std::vector<cv::Mat> bgraChannels;

        cv::split(this->image, bgraChannels);
        this->alpha = bgraChannels[3];
        cv::cvtColor(this->image, this->image, cv::COLOR_BGRA2BGR);
      }
    }

    void Base::restoreAlpha()
    {
      if (this->hasAlpha)
      {
        cv::Mat imageBgra;
        std::vector<cv::Mat> bgraChannels;

        cv::cvtColor(this->image, imageBgra, cv::COLOR_BGR2BGRA);
        cv::split(imageBgra, bgraChannels);
        bgraChannels[3] = this->alpha;
        cv::merge(bgraChannels, this->image);
      }
    }

    void Base::text()
    {
      this->removeAlpha();

      this->playerName();
      this->playerPosition();

      this->statsPace();
      this->statsOverall();
      this->statsPassing();
      this->statsShooting();
      this->statsPhysical();
      this->statsDribbling();
      this->statsDefending();

      this->restoreAlpha();
    }

    void Base::images()
    {
      this->playerClub();
      this->playerImage();
      this->playerCountry();
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
      end = cv::Point(this->image.cols - this->dimentions.marginLineUnderName, this->dimentions.topMarginLineUnderName);

      Ink::line(image, start, end, this->tmplate.colors.second);

      start = cv::Point(this->dimentions.marginLineUnderStats, this->dimentions.topMarginLineUnderStats);
      end = cv::Point(this->image.cols - this->dimentions.marginLineUnderStats, this->dimentions.topMarginLineUnderStats);

      Ink::line(image, start, end, this->tmplate.colors.second);

      start = cv::Point(this->image.cols / 2, this->dimentions.topMarginVerticalLineBetweenStatsColumns);
      end = cv::Point(this->image.cols / 2, this->dimentions.bottomPointVerticalLineBetweenStatsColumns);

      Ink::line(image, start, end, this->tmplate.colors.second);
    }

    void Base::playerClub()
    {
      int width = 140 * 0.55;
      int height = 140 * 0.55;

      cv::Size size(width, height);
      cv::resize(this->clublogo, this->clublogo, size);

      int x = this->dimentions.leftMarginClubBadge;
      int y = this->dimentions.topMarginClubBadge;
      cv::Point position(x, y);

      if (position.x + this->clublogo.cols > this->image.cols || position.y + this->clublogo.rows > this->image.rows)
      {
        std::cerr << "The club image does not fit within the card at the specified position" << std::endl;
      }

      Ink::add(this->image, this->clublogo, position);
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

      Ink::write(text, color, font, position, this->image);
    }

    void Base::playerPosition()
    {
      std::string text = positionToString(this->card.getPlayer().getPosition());
      Template::Color::Base color = this->tmplate.colors.first;

      Template::Font::Buffer font = this->fonts.position;
      cv::Size size = font.buffer->getTextSize(text, font.size, -1, nullptr);

      int x = this->dimentions.leftMargin + 45 - (size.width / 2);
      int y = this->dimentions.topMarginPosition + size.height;
      cv::Point position = {x, y};

      Ink::write(text, color, font, position, this->image);
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

      Ink::write(text, color, font, position, this->image);
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

      Ink::write(valueText, valueColor, valueFont, valuePosition, this->image);

      std::string labelText = "PAC";
      Template::Color::Base labelColor = this->tmplate.colors.second;

      Template::Font::Buffer labelFont = this->fonts.label;
      cv::Size labelSize = labelFont.buffer->getTextSize(labelText, labelFont.size, -1, nullptr);

      int labelX = this->dimentions.leftMarginAttrLabelCol1;
      int labelY = this->dimentions.topMarginStatsRow1Labels + labelSize.height;
      cv::Point labelPosition = {labelX, labelY};

      Ink::write(labelText, labelColor, labelFont, labelPosition, this->image);
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

      Ink::write(valueText, valueColor, valueFont, valuePosition, this->image);

      std::string labelText = "SHO";
      Template::Color::Base labelColor = this->tmplate.colors.second;

      Template::Font::Buffer labelFont = this->fonts.label;
      cv::Size labelSize = labelFont.buffer->getTextSize(labelText, labelFont.size, -1, nullptr);

      int labelX = this->dimentions.leftMarginAttrLabelCol1;
      int labelY = this->dimentions.topMarginStatsRow2Labels + labelSize.height;
      cv::Point labelPosition = {labelX, labelY};

      Ink::write(labelText, labelColor, labelFont, labelPosition, this->image);
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

      Ink::write(valueText, valueColor, valueFont, valuePosition, this->image);

      std::string labelText = "PAS";
      Template::Color::Base labelColor = this->tmplate.colors.second;

      Template::Font::Buffer labelFont = this->fonts.label;
      cv::Size labelSize = labelFont.buffer->getTextSize(labelText, labelFont.size, -1, nullptr);

      int labelX = this->dimentions.leftMarginAttrLabelCol1;
      int labelY = this->dimentions.topMarginStatsRow3Labels + labelSize.height;
      cv::Point labelPosition = {labelX, labelY};

      Ink::write(labelText, labelColor, labelFont, labelPosition, this->image);
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

      Ink::write(valueText, valueColor, valueFont, valuePosition, this->image);

      std::string labelText = "DRI";
      Template::Color::Base labelColor = this->tmplate.colors.second;

      Template::Font::Buffer labelFont = this->fonts.label;
      cv::Size labelSize = labelFont.buffer->getTextSize(labelText, labelFont.size, -1, nullptr);

      int labelX = this->dimentions.leftMarginAttrLabelCol2;
      int labelY = this->dimentions.topMarginStatsRow1Labels + labelSize.height;
      cv::Point labelPosition = {labelX, labelY};

      Ink::write(labelText, labelColor, labelFont, labelPosition, this->image);
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

      Ink::write(valueText, valueColor, valueFont, valuePosition, this->image);

      std::string labelText = "DEF";
      Template::Color::Base labelColor = this->tmplate.colors.second;

      Template::Font::Buffer labelFont = this->fonts.label;
      cv::Size labelSize = labelFont.buffer->getTextSize(labelText, labelFont.size, -1, nullptr);

      int labelX = this->dimentions.leftMarginAttrLabelCol2;
      int labelY = this->dimentions.topMarginStatsRow2Labels + labelSize.height;
      cv::Point labelPosition = {labelX, labelY};

      Ink::write(labelText, labelColor, labelFont, labelPosition, this->image);
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

      Ink::write(valueText, valueColor, valueFont, valuePosition, this->image);

      std::string labelText = "PHY";
      Template::Color::Base labelColor = this->tmplate.colors.second;

      Template::Font::Buffer labelFont = this->fonts.label;
      cv::Size labelSize = labelFont.buffer->getTextSize(labelText, labelFont.size, -1, nullptr);

      int labelX = this->dimentions.leftMarginAttrLabelCol2;
      int labelY = this->dimentions.topMarginStatsRow3Labels + labelSize.height;
      cv::Point labelPosition = {labelX, labelY};

      Ink::write(labelText, labelColor, labelFont, labelPosition, this->image);
    }

    void Base::playerCountry()
    {
      cv::Mat flag = Assets::loadFlag(this->card.getPlayer().getCountry());

      int width = 166 * 0.48;
      int height = 99 * 0.48;

      cv::Size size(width, height);
      cv::resize(flag, flag, size);

      int x = this->dimentions.leftMarginClubBadge;
      int y = this->dimentions.topMarginFlag;
      cv::Point position(x, y);

      if (position.x + flag.cols > this->image.cols || position.y + flag.rows > this->image.rows)
      {
        std::cerr << "The flag image does not fit within the card at the specified position" << std::endl;
      }

      Ink::add(this->image, flag, position);
    }

    void Base::playerImage()
    {
      cv::Mat image = this->card.getPlayer().getImage();

      int width = 320;
      int height = 320;

      cv::Size size(width, height);
      cv::resize(image, image, size);

      int x = this->dimentions.leftMarginPlayerImage;
      int y = this->image.rows - size.height - 383;
      cv::Point position(x, y);

      if (position.x + size.width > this->image.cols || position.y + size.height > this->image.rows)
      {
        std::cerr << "The player image does not fit within the card at the specified position" << std::endl;
      }

      Ink::add(this->image, image, position);
    }
  }
}