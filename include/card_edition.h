#ifndef CARDEDITION_H
#define CARDEDITION_H

#include <string>

enum class CardEdition
{
  FIFA19 = 19
};

std::string getCardEditionName(const CardEdition &cardEdition);

#endif