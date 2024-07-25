#ifndef STATS_H
#define STATS_H

#include <string>

class Stats
{
public:
  Stats(unsigned short int pace, unsigned short int passing, unsigned short int physical, unsigned short int shooting, unsigned short int dribbling, unsigned short int defending);

  unsigned short int getPace() const;
  unsigned short int getOverall() const;
  unsigned short int getPassing() const;
  unsigned short int getPhysical() const;
  unsigned short int getShooting() const;
  unsigned short int getDribbling() const;
  unsigned short int getDefending() const;

  std::string toString() const;

private:
  unsigned short int pace;
  unsigned short int overall;
  unsigned short int passing;
  unsigned short int physical;
  unsigned short int shooting;
  unsigned short int dribbling;
  unsigned short int defending;
};

#endif