#include "dimentions.hpp"
#include "template.hpp"
#include "standard.hpp"
#include "ucl.hpp"

namespace Template
{
  namespace Dimentions
  {
    Base Base::fromTemplate(Template::Base tmplate)
    {
      switch (tmplate.type)
      {
      case Card::Type::STANDARD:
        return Standard19();
      case Card::Type::UCL:
        return UCL19();
      default:
        return Base();
      }
    }
  }
}