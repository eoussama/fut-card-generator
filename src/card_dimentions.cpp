#include "card_dimentions.h"
#include "card_dimentions_19_ucl.h"
#include "card_dimentions_19_standard.h"

CardDimentions CardDimentions::fromType(CardTemplate type)
{
  switch (getCardKind(type))
  {
  case CardType::STANDARD:
    return CardDimentions(CardDimentions19Standard());
  case CardType::UCL:
    return CardDimentions(CardDimentions19Ucl());
  default:
    return CardDimentions(CardDimentions());
  }
}