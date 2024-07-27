#include <iostream>

#include "card.hpp"
#include "generator.hpp"

int main(int argc, char *argv[])
{
  // TODO: Add a CLI parser

  // TODO: Create a card
  Card::Base card = Card::create(Card::Edition::FIFA19, Card::Template::Code::RARE_UCL, Card::Language::EN, "Kcag", "Nakama", "Morocco", Player::Position::ALL, 96, 80, 94, 96, 88, 60);

  // TODO: Generate the card
  auto result = Core::Generator::generate(card);

  // TODO: Save the card

  // TODO: Cleanup

  return 0;
}