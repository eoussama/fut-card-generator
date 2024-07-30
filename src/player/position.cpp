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

  Position stringToPosition(const std::string &position)
  {
    if (position == "gk")
      return Position::GK;
    else if (position == "lb")
      return Position::LB;
    else if (position == "lwb")
      return Position::LWB;
    else if (position == "cb")
      return Position::CB;
    else if (position == "rb")
      return Position::RB;
    else if (position == "rwb")
      return Position::RWB;
    else if (position == "lm")
      return Position::LM;
    else if (position == "cdm")
      return Position::CDM;
    else if (position == "cm")
      return Position::CM;
    else if (position == "cam")
      return Position::CAM;
    else if (position == "rm")
      return Position::RM;
    else if (position == "lw")
      return Position::LW;
    else if (position == "rw")
      return Position::RW;
    else if (position == "lf")
      return Position::LF;
    else if (position == "cf")
      return Position::CF;
    else if (position == "rf")
      return Position::RF;
    else if (position == "st")
      return Position::ST;
    else
      return Position::ALL;
  }
}