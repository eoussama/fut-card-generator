#ifndef CARDKIND_H
#define CARDKIND_H

#include <string>

enum class CardKind
{
  STANDARD = 1,
  UCL
};

std::string getCardKindName(const CardKind &cardKind);

#endif