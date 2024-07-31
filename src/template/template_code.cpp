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
    case Code::FS1:
      return "FS1";
    case Code::FS2:
      return "FS2";
    case Code::FS3:
      return "FS3";
    case Code::FS4:
      return "FS4";
    case Code::FS5:
      return "FS5";
    case Code::FS6:
      return "FS6";
    case Code::FS7:
      return "FS7";
    case Code::FS8:
      return "FS8";
    case Code::FS9:
      return "FS9";
    case Code::FS10:
      return "FS10";
    case Code::FS11:
      return "FS11";
    case Code::OTW:
      return "OTW";
    case Code::ST_PATRICKS:
      return "ST PATRICKS";
    default:
      return "Unknown";
    }
  }

  Code stringToCode(const std::string &code)
  {
    if (code == "common_bronze")
      return Code::COMMON_BRONZE;
    else if (code == "common_silver")
      return Code::COMMON_SILVER;
    else if (code == "common_gold")
      return Code::COMMON_GOLD;
    else if (code == "rare_bronze")
      return Code::RARE_BRONZE;
    else if (code == "rare_silver")
      return Code::RARE_SILVER;
    else if (code == "rare_gold")
      return Code::RARE_GOLD;
    else if (code == "if_bronze")
      return Code::IF_BRONZE;
    else if (code == "if_silver")
      return Code::IF_SILVER;
    else if (code == "if_gold")
      return Code::IF_GOLD;
    else if (code == "fc_bronze")
      return Code::FC_BRONZE;
    else if (code == "fc_silver")
      return Code::FC_SILVER;
    else if (code == "fc_gold")
      return Code::FC_GOLD;
    else if (code == "motm")
      return Code::MOTM;
    else if (code == "pl_potm")
      return Code::PL_POTM;
    else if (code == "bl_potm")
      return Code::BL_POTM;
    else if (code == "futties")
      return Code::FUTTIES;
    else if (code == "futtiesw")
      return Code::FUTTIESW;
    else if (code == "toty")
      return Code::TOTY;
    else if (code == "toty_n")
      return Code::TOTY_N;
    else if (code == "el")
      return Code::EL;
    else if (code == "el_motm")
      return Code::EL_MOTM;
    else if (code == "el_live")
      return Code::EL_LIVE;
    else if (code == "el_sbc")
      return Code::EL_SBC;
    else if (code == "el_tott")
      return Code::EL_TOTT;
    else if (code == "common_ucl")
      return Code::COMMON_UCL;
    else if (code == "rare_ucl")
      return Code::RARE_UCL;
    else if (code == "ucl_motm")
      return Code::UCL_MOTM;
    else if (code == "ucl_live")
      return Code::UCL_LIVE;
    else if (code == "ucl_sbc")
      return Code::UCL_SBC;
    else if (code == "ucl_tott")
      return Code::UCL_TOTT;
    else if (code == "fsr")
      return Code::FSR;
    else if (code == "fs")
      return Code::FS;
    else if (code == "fsn")
      return Code::FSN;
    else if (code == "pp")
      return Code::PP;
    else if (code == "cb")
      return Code::CB;
    else if (code == "rb")
      return Code::RB;
    else if (code == "hero")
      return Code::HERO;
    else if (code == "aw")
      return Code::AW;
    else if (code == "fb")
      return Code::FB;
    else if (code == "headliners")
      return Code::HEADLINERS;
    else if (code == "cc")
      return Code::CC;
    else if (code == "sbc")
      return Code::SBC;
    else if (code == "sbcp")
      return Code::SBCP;
    else if (code == "legend")
      return Code::LEGEND;
    else if (code == "fs1")
      return Code::FS1;
    else if (code == "fs2")
      return Code::FS2;
    else if (code == "fs3")
      return Code::FS3;
    else if (code == "fs4")
      return Code::FS4;
    else if (code == "fs5")
      return Code::FS5;
    else if (code == "fs6")
      return Code::FS6;
    else if (code == "fs7")
      return Code::FS7;
    else if (code == "fs8")
      return Code::FS8;
    else if (code == "fs9")
      return Code::FS9;
    else if (code == "fs10")
      return Code::FS10;
    else if (code == "fs11")
      return Code::FS11;
    else if (code == "otw")
      return Code::OTW;
    else if (code == "st_patricks")
      return Code::ST_PATRICKS;
    else
      return Code::UNKNOWN;
  }
}
