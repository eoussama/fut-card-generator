#include <iostream>
#include "generator.hpp"

namespace Generator
{
  bool generate(Card::Base card)
  {
    std::cout << card.toString() << std::endl;
    return true;
  }
}
