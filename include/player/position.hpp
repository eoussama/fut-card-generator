#ifndef POSITION_HPP
#define POSITION_HPP

namespace Player
{
  enum class Position
  {
    GK = 1,
    LB,
    LWB,
    CB,
    RB,
    RWB,
    LM,
    CDM,
    CM,
    CAM,
    RM,
    LW,
    RW,
    LF,
    CF,
    RF,
    ST,
    ALL
  };

  std::string positionToString(const Position &position);
  Position stringToPosition(const std::string &position);
}

#endif