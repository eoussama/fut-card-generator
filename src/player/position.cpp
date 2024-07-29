#include <string>
#include "position.hpp"

namespace Player
{
  std::string positionToString(const Position &position)
  {
    switch (position)
    {
    case Position::GK:
      return "gk";
    case Position::LB:
      return "lb";
    case Position::LWB:
      return "lwb";
    case Position::CB:
      return "cb";
    case Position::RB:
      return "rb";
    case Position::RWB:
      return "rwb";
    case Position::LM:
      return "lm";
    case Position::CDM:
      return "cdm";
    case Position::CM:
      return "cm";
    case Position::CAM:
      return "cam";
    case Position::RM:
      return "rm";
    case Position::LW:
      return "lw";
    case Position::RW:
      return "rw";
    case Position::LF:
      return "lf";
    case Position::CF:
      return "cf";
    case Position::RF:
      return "rf";
    case Position::ST:
      return "st";
    case Position::ALL:
      return "all";
    default:
      return "Unknown";
    }
  }
}