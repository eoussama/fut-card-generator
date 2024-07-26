#include <iostream>

#include "../card/card.h"
#include "../generator.h"

int main(int argc, char *argv[])
{
  Card card = Card::create(CardEdition::FIFA19, CardTemplateName::COMMON_BRONZE, Language::EN, "John Doe", "Liverpool", "England", Player::Position::ALL, 96, 80, 94, 96, 88, 60);
  Generator::generate(card);

  return 0;
}