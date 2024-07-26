#ifndef CARDTYPE_H
#define CARDTYPE_H

#include <map>
#include <string>

#include "card_type.h"
#include "card_edition.h"

enum class CardTemplateName
{
  COMMON_BRONZE = 1,
  COMMON_SILVER,
  COMMON_GOLD,
  RARE_BRONZE,
  RARE_SILVER,
  RARE_GOLD,
  IF_BRONZE,
  IF_SILVER,
  IF_GOLD,
  FC_BRONZE,
  FC_SILVER,
  FC_GOLD,
  MOTM,
  PL_POTM,
  BL_POTM,
  FUTTIES,
  FUTTIESW,
  TOTY,
  TOTY_N,
  EL,
  EL_MOTM,
  EL_LIVE,
  EL_SBC,
  EL_TOTT,
  COMMON_UCL,
  RARE_UCL,
  UCL_MOTM,
  UCL_LIVE,
  UCL_SBC,
  UCL_TOTT,
  FSR,
  FS,
  FSN,
  PP,
  CB,
  RB,
  HERO,
  AW,
  FB,
  HEADLINERS,
  CC,
  SBC,
  SBCP,
  LEGEND
};

struct CardTemplate {
  CardType kind;
  std::string fileName;
};

typedef std::map<CardTemplateName, CardTemplate> CardTemplates;

CardTemplates initCardTemplates();
std::string getTemplateNameStr(const CardTemplateName &templateName);

#endif