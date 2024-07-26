#include "stats.h"

Stats::Stats(unsigned short int pace, unsigned short int passing, unsigned short int physical, unsigned short int shooting, unsigned short int dribbling, unsigned short int defending)
    : pace(pace), passing(passing), physical(physical), shooting(shooting), dribbling(dribbling), defending(defending)
{
}

unsigned short int Stats::getPace() const { return pace; }
unsigned short int Stats::getPassing() const { return passing; }
unsigned short int Stats::getPhysical() const { return physical; }
unsigned short int Stats::getShooting() const { return shooting; }
unsigned short int Stats::getDribbling() const { return dribbling; }
unsigned short int Stats::getDefending() const { return defending; }
unsigned short int Stats::getOverall() const { return (pace + passing + physical + shooting + dribbling + defending) / 6; }

std::string Stats::toString() const
{
  return "Stats(Overall: " + std::to_string(getOverall()) + ", Pace: " + std::to_string(pace) + ", Passing: " + std::to_string(passing) + ", Physical: " + std::to_string(physical) + ", Shooting: " + std::to_string(shooting) + ", Dribbling: " + std::to_string(dribbling) + ", Defending: " + std::to_string(defending) + ")";
}