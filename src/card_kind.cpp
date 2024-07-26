#include "card_kind.h"

std::string getCardKindName(const CardKind &cardKind)
{
  switch (cardKind)
  {
  case CardKind::STANDARD:
    return "Standard";
  case CardKind::UCL:
    return "UCL";
  default:
    return "Unknown";
  }
}