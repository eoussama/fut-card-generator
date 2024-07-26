#include "card_template.h"
#include "card_dimentions.h"
#include "card_dimentions_19_ucl.h"
#include "card_dimentions_19_standard.h"

namespace Dimentions
{
  Base Base::fromTemplate(CardTemplate tmplate)
  {
    switch (tmplate.kind)
    {
    case CardType::STANDARD:
      return Standard19();
    case CardType::UCL:
      return UCL19();
    default:
      return Base();
    }
  }
}