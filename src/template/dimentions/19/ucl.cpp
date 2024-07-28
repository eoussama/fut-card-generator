#include "ucl.hpp"

namespace Template
{
  namespace Dimentions
  {
    UCL19::UCL19()
    {
      cardKind = Card::Type::UCL;

      leftMargin = 85;
      leftMarginClubBadge = leftMargin + 10;
      leftMarginOverall = leftMargin - 17;

      topMarginPosition = 200;

      topMarginName = 448;

      topMarginPlayerOverall = 105;

      topMarginLineUnderPosition = 255;
      leftPointXCoordinateLineUnderPosition = leftMargin + 20;
      rightPointXCoordinateLineUnderPosition = leftPointXCoordinateLineUnderPosition + 55;

      topMarginFlag = 272;
      topMarginClubBadge = 350;
      topMarginLineUnderCountryFlag = 335;

      topMarginLineUnderName = 510;
      marginLineUnderName = 90;

      topMarginVerticalLineBetweenStatsColumns = topMarginLineUnderName + 20;
      bottomPointVerticalLineBetweenStatsColumns = topMarginVerticalLineBetweenStatsColumns + 165;

      topMarginLineUnderStats = 720;
      marginLineUnderStats = 300;

      attrValueLabelHorizontalGap = 70;

      leftMarginAttrValueCol1 = leftMargin + 0;
      leftMarginAttrLabelCol1 = leftMarginAttrValueCol1 + attrValueLabelHorizontalGap;

      leftMarginAttrValueCol2 = leftMarginAttrValueCol1 + 220;
      leftMarginAttrLabelCol2 = leftMarginAttrValueCol2 + attrValueLabelHorizontalGap;

      statsRowVerticalGap = 62;

      topmarginLabelOffset = 3;

      topMarginStatsRow1Values = 530;
      topMarginStatsRow1Labels = topMarginStatsRow1Values + topmarginLabelOffset;

      topMarginStatsRow2Values = topMarginStatsRow1Values + statsRowVerticalGap;
      topMarginStatsRow2Labels = topMarginStatsRow2Values + topmarginLabelOffset;

      topMarginStatsRow3Values = topMarginStatsRow2Values + statsRowVerticalGap;
      topMarginStatsRow3Labels = topMarginStatsRow3Values + topmarginLabelOffset;

      leftMarginPlayerImage = 165;
      leftMarginDynamicPlayerImage = 30;
      bottomMarginDynamicPlayerImage = 170;
    }
  }
}