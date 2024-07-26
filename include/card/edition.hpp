#ifndef CARDEDITION_H
#define CARDEDITION_H

#include <string>

namespace Card
{
  enum class Edition
  {
    FIFA19 = 19
  };

  std::string getCardEditionName(const Edition &cardEdition);
}

#endif