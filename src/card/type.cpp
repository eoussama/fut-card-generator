#include "card_type.h"

std::string getCardKindName(const CardType &cardKind)
{
  switch (cardKind)
  {
  case CardType::STANDARD:
    return "Standard";
  case CardType::UCL:
    return "UCL";
  default:
    return "Unknown";
  }
}