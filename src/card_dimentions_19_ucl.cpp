#include "card_dimentions_19_ucl.h"

CardDimentions19Ucl::CardDimentions19Ucl()
{
  cardKind = CardType::UCL;

  left_margin = 85;
  left_margin_club_badge = left_margin + 10;
  left_margin_overall = left_margin + 13;

  top_margin_position = 195;

  top_margin_name = 445;

  top_margin_player_overall = 90;

  top_margin_line_under_position = 255;
  left_point_x_coordinate_line_under_position = left_margin + 20;
  right_point_x_coordinate_line_under_position = left_point_x_coordinate_line_under_position + 55;

  top_margin_line_under_country_flag = 335;

  top_margin_line_under_name = 525;
  margin_line_under_name = 90;

  top_margin_vertical_line_between_stats_columns = top_margin_line_under_name + 20;
  bottom_point_vertical_line_between_stats_columns = top_margin_vertical_line_between_stats_columns + 165;

  top_margin_line_under_stats = 735;
  margin_line_under_stats = 300;

  attr_value_label_horizontal_gap = 70;

  left_margin_attr_value_col1 = left_margin + 0;
  left_margin_attr_label_col1 = left_margin_attr_value_col1 + attr_value_label_horizontal_gap;

  left_margin_attr_value_col2 = left_margin_attr_value_col1 + 220;
  left_margin_attr_label_col2 = left_margin_attr_value_col2 + attr_value_label_horizontal_gap;

  stats_row_vertical_gap = 62;

  top_margin_label_offset = 3;

  top_margin_stats_row_1_values = 530;
  top_margin_stats_row_1_labels = top_margin_stats_row_1_values + top_margin_label_offset;

  top_margin_stats_row_2_values = top_margin_stats_row_1_values + stats_row_vertical_gap;
  top_margin_stats_row_2_labels = top_margin_stats_row_2_values + top_margin_label_offset;

  top_margin_stats_row_3_values = top_margin_stats_row_2_values + stats_row_vertical_gap;
  top_margin_stats_row_3_labels = top_margin_stats_row_3_values + top_margin_label_offset;

  left_margin_player_image = 165;
  left_margin_dynamic_player_image = 30;
  bottom_margin_dynamic_player_image = 170;
}