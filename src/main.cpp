#include <iostream>

#include "../include/stats.h"
#include "../include/player.h"
#include "../include/position.h"

int main(int argc, char *argv[])
{
  Stats stats(96, 80, 94, 96, 88, 60);
  Player player("John Doe", "Liverpool", "England", Position::ALL, stats);
  std::cout << player.toString() << std::endl;

  return 0;
}