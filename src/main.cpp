#include <iostream>

#include "player.h"

int main(int argc, char *argv[])
{
  Player player("John Doe", "Liverpool");
  std::cout << player.toString() << std::endl;
  std::cout << "Fut Card Generator" << std::endl;
  return 0;
}