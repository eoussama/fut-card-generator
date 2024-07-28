#ifndef DIMENTIONS_HPP
#define DIMENTIONS_HPP

#include "template.hpp"

namespace Template
{
  namespace Dimentions
  {
    struct Base
    {
      Card::Type cardKind;

      int leftMargin;
      int leftMarginClubBadge;
      int leftMarginOverall;

      int topMarginName;
      int topMarginPosition;
      int topMarginPlayerOverall;

      int topMarginLineUnderPosition;
      int leftPointXCoordinateLineUnderPosition;
      int rightPointXCoordinateLineUnderPosition;

      int topMarginFlag;
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

      int topMarginStatsRow2Values;
      int topMarginStatsRow2Labels;

      int topMarginStatsRow3Values;
      int topMarginStatsRow3Labels;

      int leftMarginPlayerImage;
      int leftMarginDynamicPlayerImage;
      int bottomMarginDynamicPlayerImage;

      static Base fromTemplate(Template::Base tmplate);
    };
  }
}

#endif