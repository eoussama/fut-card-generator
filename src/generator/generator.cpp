#include <iostream>
#include "generator.h"

namespace Generator
{
  bool generate(Card card)
  {
    std::cout << card.toString() << std::endl;
    return true;
  }
}
