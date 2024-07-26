#include <iostream>

#include "card.hpp"
#include "generator.hpp"

int main(int argc, char *argv[])
{
  Card::Base card = Card::create(Card::Edition::FIFA19, Card::Template::Code::UCL_SBC, Card::Language::EN, "John Doe", "Liverpool", "England", Player::Position::ALL, 96, 80, 94, 96, 88, 60);
  Generator::generate(card);

  return 0;
}