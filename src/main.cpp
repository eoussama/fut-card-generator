#include <iostream>

#include "../include/card.h"
#include "../include/card_dimentions_19_ucl.h"
#include "../include/card_dimentions_19_standard.h"

int main(int argc, char *argv[])
{
  CardDimentions19Ucl dim_ucl;
  CardDimentions19Standard dim;
  Card card = Card::create(CardEdition::FIFA19, CardType::RARE_GOLD, Language::EN, "John Doe", "Liverpool", "England", Position::ALL, 96, 80, 94, 96, 88, 60);

  std::cout << card.toString() << std::endl;
  std::cout << dim.top_margin_name << std::endl;
  std::cout << dim_ucl.top_margin_name << std::endl;

  return 0;
}