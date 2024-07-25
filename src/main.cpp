#include <iostream>

#include "../include/card.h"
#include "../include/stats.h"
#include "../include/player.h"
#include "../include/position.h"

int main(int argc, char *argv[])
{
  Stats stats(96, 80, 94, 96, 88, 60);
  Player player("John Doe", "Liverpool", "England", Position::ALL, stats);
  Card card(player, stats, Language::EN);

  std::cout << card.toString() << std::endl;

  return 0;
}