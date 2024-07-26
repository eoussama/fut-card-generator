#include "card_type.h"
#include "card_template.h"

std::string getCardName(const CardTemplate &card)
{
  switch (card)
  {
  case CardTemplate::COMMON_BRONZE:
    return "Common Bronze";
  case CardTemplate::COMMON_SILVER:
    return "Common Silver";
  case CardTemplate::COMMON_GOLD:
    return "Common Gold";
  case CardTemplate::RARE_BRONZE:
    return "Rare Bronze";
  case CardTemplate::RARE_SILVER:
    return "Rare Silver";
  case CardTemplate::RARE_GOLD:
    return "Rare Gold";
  case CardTemplate::IF_BRONZE:
    return "IF Bronze";
  case CardTemplate::IF_SILVER:
    return "IF Silver";
  case CardTemplate::IF_GOLD:
    return "IF Gold";
  case CardTemplate::FC_BRONZE:
    return "FC Bronze";
  case CardTemplate::FC_SILVER:
    return "FC Silver";
  case CardTemplate::FC_GOLD:
    return "FC Gold";
  case CardTemplate::MOTM:
    return "MOTM";
  case CardTemplate::PL_POTM:
    return "PL POTM";
  case CardTemplate::BL_POTM:
    return "BL POTM";
  case CardTemplate::FUTTIES:
    return "Futties";
  case CardTemplate::FUTTIESW:
    return "Futties W";
  case CardTemplate::TOTY:
    return "TOTY";
  case CardTemplate::TOTY_N:
    return "TOTY N";
  case CardTemplate::EL:
    return "EL";
  case CardTemplate::EL_MOTM:
    return "EL MOTM";
  case CardTemplate::EL_LIVE:
    return "EL LIVE";
  case CardTemplate::EL_SBC:
    return "EL SBC";
  case CardTemplate::EL_TOTT:
    return "EL TOTT";
  case CardTemplate::COMMON_UCL:
    return "Common UCL";
  case CardTemplate::RARE_UCL:
    return  "Rare UCL";
  case CardTemplate::UCL_MOTM:
    return "UCL MOTM";
  case CardTemplate::UCL_LIVE:
    return "UCL LIVE";
  case CardTemplate::UCL_SBC:
    return "UCL SBC";
  case CardTemplate::UCL_TOTT:
    return "UCL TOTT";
  case CardTemplate::FSR:
    return "FSR";
  case CardTemplate::FS:
    return "FS";
  case CardTemplate::FSN:
    return "FSN";
  case CardTemplate::PP:
    return "PP";
  case CardTemplate::CB:
    return "CB";
  case CardTemplate::RB:
    return "RB";
  case CardTemplate::HERO:
    return "HERO";
  case CardTemplate::AW:
    return "AW";
  case CardTemplate::FB:
    return "FB";
  case CardTemplate::HEADLINERS:
    return "Headliners";
  case CardTemplate::CC:
    return "CC";
  case CardTemplate::SBC:
    return "SBC";
  case CardTemplate::SBCP:
    return "SBCP";
  case CardTemplate::LEGEND:
    return "Legend";
  default:
    return "Unknown";
  }
}

CardType getCardKind(const CardTemplate &type)
{
  switch (type)
  {
  case CardTemplate::COMMON_BRONZE:
  case CardTemplate::COMMON_SILVER:
  case CardTemplate::COMMON_GOLD:
  case CardTemplate::RARE_BRONZE:
  case CardTemplate::RARE_SILVER:
  case CardTemplate::RARE_GOLD:
  case CardTemplate::IF_BRONZE:
  case CardTemplate::IF_SILVER:
  case CardTemplate::IF_GOLD:
  case CardTemplate::FC_BRONZE:
  case CardTemplate::FC_SILVER:
  case CardTemplate::FC_GOLD:
  case CardTemplate::MOTM:
  case CardTemplate::PL_POTM:
  case CardTemplate::BL_POTM:
  case CardTemplate::FUTTIES:
  case CardTemplate::FUTTIESW:
  case CardTemplate::TOTY:
  case CardTemplate::TOTY_N:
  case CardTemplate::EL:
  case CardTemplate::EL_MOTM:
  case CardTemplate::EL_LIVE:
  case CardTemplate::EL_SBC:
  case CardTemplate::EL_TOTT:
  case CardTemplate::FSR:
  case CardTemplate::FS:
  case CardTemplate::FSN:
  case CardTemplate::PP:
  case CardTemplate::CB:
  case CardTemplate::RB:
  case CardTemplate::HERO:
  case CardTemplate::AW:
  case CardTemplate::FB:
  case CardTemplate::HEADLINERS:
  case CardTemplate::CC:
  case CardTemplate::SBC:
  case CardTemplate::SBCP:
  case CardTemplate::LEGEND:
    return CardType::STANDARD;
  default:
    return CardType::UCL;
  }
}