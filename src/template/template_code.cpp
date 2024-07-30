#include "template_code.hpp"

namespace Template
{
  std::string toString(const Code &code)
  {
    switch (code)
    {
    case Code::COMMON_BRONZE:
      return "Common Bronze";
    case Code::COMMON_SILVER:
      return "Common Silver";
    case Code::COMMON_GOLD:
      return "Common Gold";
    case Code::RARE_BRONZE:
      return "Rare Bronze";
    case Code::RARE_SILVER:
      return "Rare Silver";
    case Code::RARE_GOLD:
      return "Rare Gold";
    case Code::IF_BRONZE:
      return "IF Bronze";
    case Code::IF_SILVER:
      return "IF Silver";
    case Code::IF_GOLD:
      return "IF Gold";
    case Code::FC_BRONZE:
      return "FC Bronze";
    case Code::FC_SILVER:
      return "FC Silver";
    case Code::FC_GOLD:
      return "FC Gold";
    case Code::MOTM:
      return "MOTM";
    case Code::PL_POTM:
      return "PL POTM";
    case Code::BL_POTM:
      return "BL POTM";
    case Code::FUTTIES:
      return "Futties";
    case Code::FUTTIESW:
      return "Futties W";
    case Code::TOTY:
      return "TOTY";
    case Code::TOTY_N:
      return "TOTY N";
    case Code::EL:
      return "EL";
    case Code::EL_MOTM:
      return "EL MOTM";
    case Code::EL_LIVE:
      return "EL LIVE";
    case Code::EL_SBC:
      return "EL SBC";
    case Code::EL_TOTT:
      return "EL TOTT";
    case Code::COMMON_UCL:
      return "Common UCL";
    case Code::RARE_UCL:
      return "Rare UCL";
    case Code::UCL_MOTM:
      return "UCL MOTM";
    case Code::UCL_LIVE:
      return "UCL LIVE";
    case Code::UCL_SBC:
      return "UCL SBC";
    case Code::UCL_TOTT:
      return "UCL TOTT";
    case Code::FSR:
      return "FSR";
    case Code::FS:
      return "FS";
    case Code::FSN:
      return "FSN";
    case Code::PP:
      return "PP";
    case Code::CB:
      return "CB";
    case Code::RB:
      return "RB";
    case Code::HERO:
      return "HERO";
    case Code::AW:
      return "AW";
    case Code::FB:
      return "FB";
    case Code::HEADLINERS:
      return "Headliners";
    case Code::CC:
      return "CC";
    case Code::SBC:
      return "SBC";
    case Code::SBCP:
      return "SBCP";
    case Code::LEGEND:
      return "Legend";
    default:
      return "Unknown";
    }
  }

  Code stringToCode(const std::string &code)
  {
    if (code == "COMMON_BRONZE")
      return Code::COMMON_BRONZE;
    else if (code == "COMMON_SILVER")
      return Code::COMMON_SILVER;
    else if (code == "COMMON_GOLD")
      return Code::COMMON_GOLD;
    else if (code == "RARE_BRONZE")
      return Code::RARE_BRONZE;
    else if (code == "RARE_SILVER")
      return Code::RARE_SILVER;
    else if (code == "RARE_GOLD")
      return Code::RARE_GOLD;
    else if (code == "IF_BRONZE")
      return Code::IF_BRONZE;
    else if (code == "IF_SILVER")
      return Code::IF_SILVER;
    else if (code == "IF_GOLD")
      return Code::IF_GOLD;
    else if (code == "FC_BRONZE")
      return Code::FC_BRONZE;
    else if (code == "FC_SILVER")
      return Code::FC_SILVER;
    else if (code == "FC_GOLD")
      return Code::FC_GOLD;
    else if (code == "MOTM")
      return Code::MOTM;
    else if (code == "PL_POTM")
      return Code::PL_POTM;
    else if (code == "BL_POTM")
      return Code::BL_POTM;
    else if (code == "FUTTIES")
      return Code::FUTTIES;
    else if (code == "FUTTIESW")
      return Code::FUTTIESW;
    else if (code == "TOTY")
      return Code::TOTY;
    else if (code == "TOTY_N")
      return Code::TOTY_N;
    else if (code == "EL")
      return Code::EL;
    else if (code == "EL_MOTM")
      return Code::EL_MOTM;
    else if (code == "EL_LIVE")
      return Code::EL_LIVE;
    else if (code == "EL_SBC")
      return Code::EL_SBC;
    else if (code == "EL_TOTT")
      return Code::EL_TOTT;
    else if (code == "COMMON_UCL")
      return Code::COMMON_UCL;
    else if (code == "RARE_UCL")
      return Code::RARE_UCL;
    else if (code == "UCL_MOTM")
      return Code::UCL_MOTM;
    else if (code == "UCL_LIVE")
      return Code::UCL_LIVE;
    else if (code == "UCL_SBC")
      return Code::UCL_SBC;
    else if (code == "UCL_TOTT")
      return Code::UCL_TOTT;
    else if (code == "FSR")
      return Code::FSR;
    else if (code == "FS")
      return Code::FS;
    else if (code == "FSN")
      return Code::FSN;
    else if (code == "PP")
      return Code::PP;
    else if (code == "CB")
      return Code::CB;
    else if (code == "RB")
      return Code::RB;
    else if (code == "HERO")
      return Code::HERO;
    else if (code == "AW")
      return Code::AW;
    else if (code == "FB")
      return Code::FB;
    else if (code == "HEADLINERS")
      return Code::HEADLINERS;
    else if (code == "CC")
      return Code::CC;
    else if (code == "SBC")
      return Code::SBC;
    else if (code == "SBCP")
      return Code::SBCP;
    else if (code == "LEGEND")
      return Code::LEGEND;
    else
      return Code::UNKNOWN;
  }
}
