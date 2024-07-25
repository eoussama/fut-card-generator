#ifndef POSITION_H
#define POSITION_H

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

std::string getPositionName(const Position &position);

#endif