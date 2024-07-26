#include "card_type.h"

std::string getCardName(const CardType &card)
{
  switch (card)
  {
  case CardType::COMMON_BRONZE:
    return "Common Bronze";
  case CardType::COMMON_SILVER:
    return "Common Silver";
  case CardType::COMMON_GOLD:
    return "Common Gold";
  case CardType::RARE_BRONZE:
    return "Rare Bronze";
  case CardType::RARE_SILVER:
    return "Rare Silver";
  case CardType::RARE_GOLD:
    return "Rare Gold";
  case CardType::IF_BRONZE:
    return "IF Bronze";
  case CardType::IF_SILVER:
    return "IF Silver";
  case CardType::IF_GOLD:
    return "IF Gold";
  case CardType::FC_BRONZE:
    return "FC Bronze";
  case CardType::FC_SILVER:
    return "FC Silver";
  case CardType::FC_GOLD:
    return "FC Gold";
  case CardType::MOTM:
    return "MOTM";
  case CardType::PL_POTM:
    return "PL POTM";
  case CardType::BL_POTM:
    return "BL POTM";
  case CardType::FUTTIES:
    return "Futties";
  case CardType::FUTTIESW:
    return "Futties W";
  case CardType::TOTY:
    return "TOTY";
  case CardType::TOTY_N:
    return "TOTY N";
  case CardType::EL:
    return "EL";
  case CardType::EL_MOTM:
    return "EL MOTM";
  case CardType::EL_LIVE:
    return "EL LIVE";
  case CardType::EL_SBC:
    return "EL SBC";
  case CardType::EL_TOTT:
    return "EL TOTT";
  case CardType::COMMON_UCL:
    return "Common UCL";
  case CardType::RARE_UCL:
    return  "Rare UCL";
  case CardType::UCL_MOTM:
    return "UCL MOTM";
  case CardType::UCL_LIVE:
    return "UCL LIVE";
  case CardType::UCL_SBC:
    return "UCL SBC";
  case CardType::UCL_TOTT:
    return "UCL TOTT";
  case CardType::FSR:
    return "FSR";
  case CardType::FS:
    return "FS";
  case CardType::FSN:
    return "FSN";
  case CardType::PP:
    return "PP";
  case CardType::CB:
    return "CB";
  case CardType::RB:
    return "RB";
  case CardType::HERO:
    return "HERO";
  case CardType::AW:
    return "AW";
  case CardType::FB:
    return "FB";
  case CardType::HEADLINERS:
    return "Headliners";
  case CardType::CC:
    return "CC";
  case CardType::SBC:
    return "SBC";
  case CardType::SBCP:
    return "SBCP";
  case CardType::LEGEND:
    return "Legend";
  default:
    return "Unknown";
  }
}