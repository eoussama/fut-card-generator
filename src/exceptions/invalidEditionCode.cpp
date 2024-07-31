#include "exceptions/invalidEditionCode.hpp"

namespace Exceptions
{
  InvalidEditionCode::InvalidEditionCode(const std::string &editionCode)
      : std::runtime_error("Invalid edition code: " + editionCode)
  {
  }
}