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

      // draw.text((card_obj.dimensions.left_margin_overall, card_obj.dimensions.top_margin_player_overall), str(player.overall), fill=font_colour_top, font=overallfont)
      // draw.text((card_obj.dimensions.left_margin_attr_value_col1, card_obj.dimensions.top_margin_stats_row_1_values), str(player.pac), fill=font_colour, font=attribute_value_font)
      // draw.text((card_obj.dimensions.left_margin_attr_label_col1, card_obj.dimensions.top_margin_stats_row_1_labels), atr1_label, fill=font_colour, font=attribute_label_font)
    }
  }
}