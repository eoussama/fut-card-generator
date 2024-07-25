#include <iostream>

#include "../include/card.h"
#include "../include/stats.h"
#include "../include/player.h"
#include "../include/cardtype.h"
#include "../include/position.h"

int main(int argc, char *argv[])
{
  Card card = Card::create(CardType::RARE_GOLD, Language::EN, "John Doe", "Liverpool", "England", Position::ALL, 96, 80, 94, 96, 88, 60);

  std::cout << card.toString() << std::endl;

  return 0;
}