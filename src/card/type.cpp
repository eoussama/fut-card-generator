#include "type.hpp"

namespace Card
{
  std::string getCardKindName(const Type &type)
  {
    switch (type)
    {
    case Type::STANDARD:
      return "Standard";
    case Type::UCL:
      return "UCL";
    default:
      return "Unknown";
    }
  }
}