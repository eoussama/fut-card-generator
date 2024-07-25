#include <iostream>

#include "player.h"

int main(int argc, char *argv[])
{
  Player player("John Doe", "Liverpool", "England");
  std::cout << player.toString() << std::endl;
  return 0;
}