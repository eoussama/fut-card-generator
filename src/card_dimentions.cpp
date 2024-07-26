#include "card_dimentions.h"
#include "card_dimentions_19_ucl.h"
#include "card_dimentions_19_standard.h"

CardDimentions CardDimentions::fromType(CardType type)
{
  switch (getCardKind(type))
  {
  case CardKind::STANDARD:
    return CardDimentions(CardDimentions19Standard());
  case CardKind::UCL:
    return CardDimentions(CardDimentions19Ucl());
  default:
    return CardDimentions(CardDimentions());
  }
}