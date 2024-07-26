#ifndef DIMENTION_H
#define DIMENTION_H

#include "card_type.h"

struct CardDimentions
{
  CardKind cardKind;

  int left_margin;
  int left_margin_club_badge;
  int left_margin_overall;

  int top_margin_position;

  int top_margin_name;

  int top_margin_player_overall;

  int top_margin_line_under_position;
  int left_point_x_coordinate_line_under_position;
  int right_point_x_coordinate_line_under_position;

  int top_margin_line_under_country_flag;

  int top_margin_line_under_name;
  int margin_line_under_name;

  int top_margin_vertical_line_between_stats_columns;
  int bottom_point_vertical_line_between_stats_columns;

  int top_margin_line_under_stats;
  int margin_line_under_stats;

  int attr_value_label_horizontal_gap;

  int left_margin_attr_value_col1;
  int left_margin_attr_label_col1;

  int left_margin_attr_value_col2;
  int left_margin_attr_label_col2;

  int stats_row_vertical_gap;

  int top_margin_label_offset;

  int top_margin_stats_row_1_values;
  int top_margin_stats_row_1_labels;

  int top_margin_stats_row_2_values;
  int top_margin_stats_row_2_labels;

  int top_margin_stats_row_3_values;
  int top_margin_stats_row_3_labels;

  int left_margin_player_image;
  int left_margin_dynamic_player_image;
  int bottom_margin_dynamic_player_image;

  static CardDimentions fromType(CardType type);
};

#endif