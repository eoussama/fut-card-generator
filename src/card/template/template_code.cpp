#include <string>
#include "template_code.hpp"

namespace Card
{
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
  }
}