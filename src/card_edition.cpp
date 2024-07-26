#include "card_edition.h"

std::string getCardEditionName(const CardEdition &cardEdition)
{
  switch (cardEdition)
  {
  case CardEdition::FIFA19:
    return "FIFA19";
  default:
    return "Unknown";
  }
}