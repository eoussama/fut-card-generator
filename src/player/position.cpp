#include <string>
#include "position.hpp"

namespace Player
{
  std::string getPositionName(const Position &position)
  {
    switch (position)
    {
    case Position::GK:
      return "GK";
    case Position::LB:
      return "LB";
    case Position::LWB:
      return "LWB";
    case Position::CB:
      return "CB";
    case Position::RB:
      return "RB";
    case Position::RWB:
      return "RWB";
    case Position::LM:
      return "LM";
    case Position::CDM:
      return "CDM";
    case Position::CM:
      return "CM";
    case Position::CAM:
      return "CAM";
    case Position::RM:
      return "RM";
    case Position::LW:
      return "LW";
    case Position::RW:
      return "RW";
    case Position::LF:
      return "LF";
    case Position::CF:
      return "CF";
    case Position::RF:
      return "RF";
    case Position::ST:
      return "ST";
    case Position::ALL:
      return "ALL";
    default:
      return "Unknown";
    }
  }
}