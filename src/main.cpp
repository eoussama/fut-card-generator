#include <iostream>

#include "../include/player.h"
#include "../include/position.h"

int main(int argc, char *argv[])
{
  Player player("John Doe", "Liverpool", "England", Position::ALL);
  std::cout << player.toString() << std::endl;
  return 0;
}