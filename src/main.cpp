#include <iostream>

#include "../include/card.h"
#include "../include/stats.h"
#include "../include/player.h"
#include "../include/cardtype.h"
#include "../include/position.h"
#include "../include/dimention_19_standard.h"
#include "../include/dimention_19_ucl.h"

int main(int argc, char *argv[])
{
  Dimention19Standard dimention;
  Dimention19Ucl dimention_ucl;
  Card card = Card::create(CardType::RARE_GOLD, Language::EN, "John Doe", "Liverpool", "England", Position::ALL, 96, 80, 94, 96, 88, 60);

  std::cout << card.toString() << std::endl;
  std::cout << dimention.top_margin_name << std::endl;
  std::cout << dimention_ucl.top_margin_name << std::endl;

  return 0;
}