#include "dimentions.hpp"
#include "template.hpp"
#include "standard.hpp"
#include "ucl.hpp"

namespace Card
{
  namespace Dimentions
  {
    Base Base::fromTemplate(Template::Base tmplate)
    {
      switch (tmplate.type)
      {
      case Type::STANDARD:
        return Standard19();
      case Type::UCL:
        return UCL19();
      default:
        return Base();
      }
    }
  }
}