#include "card_template.h"
#include "dimentions.h"
#include "standard.h"
#include "ucl.h"

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