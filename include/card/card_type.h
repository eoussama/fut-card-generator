#ifndef CARDKIND_H
#define CARDKIND_H

#include <string>

enum class CardType
{
  STANDARD = 1,
  UCL
};

std::string getCardKindName(const CardType &cardKind);

#endif