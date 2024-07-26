#include "edition.hpp"

namespace Card
{
  std::string getCardEditionName(const Edition &edition)
  {
    switch (edition)
    {
    case Edition::FIFA19:
      return "FIFA19";
    default:
      return "Unknown";
    }
  }
}