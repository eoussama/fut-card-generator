#ifndef DIMENTION_H
#define DIMENTION_H

#include "card_template.h"

struct CardDimentions
{
  CardType cardKind;

  int leftMargin;
  int leftMarginClubBadge;
  int leftMarginOverall;

  int topMarginPosition;

  int topMarginName;

  int topMarginPlayerOverall;

  int topMarginLineUnderPosition;
  int leftPointXCoordinateLineUnderPosition;
  int rightPointXCoordinateLineUnderPosition;

  int topMarginLineUnderCountryFlag;

  int topMarginLineUnderName;
  int marginLineUnderName;

  int topMarginVerticalLineBetweenStatsColumns;
  int bottomPointVerticalLineBetweenStatsColumns;

  int topMarginLineUnderStats;
  int marginLineUnderStats;

  int attrValueLabelHorizontalGap;

  int leftMarginAttrValueCol1;
  int leftMarginAttrLabelCol1;

  int leftMarginAttrValueCol2;
  int leftMarginAttrLabelCol2;

  int statsRowVerticalGap;

  int topmarginLabelOffset;

  int topMarginStatsRow1Values;
  int topMarginStatsRow1Labels;

  int topMarginStatRow2Values;
  int topMarginStatsRow2Labels;

  int topMarginStatsRow3Values;
  int topMarginStatsRow3Labels;

  int leftMarginPlayerImage;
  int leftMarginDynamicPlayerImage;
  int bottomMarginDynamicPlayerImage;

  static CardDimentions fromTemplate(CardTemplate tmplate);
};

#endif