#include <iostream>

#include "../include/card.h"
#include "../include/generator.h"

int main(int argc, char *argv[])
{
  Card card = Card::create(CardEdition::FIFA19, CardTemplateName::UCL_LIVE, Language::EN, "John Doe", "Liverpool", "England", Position::ALL, 96, 80, 94, 96, 88, 60);
  Generator::generate(card);

  return 0;
}