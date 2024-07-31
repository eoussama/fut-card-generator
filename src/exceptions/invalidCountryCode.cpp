#include "exceptions/invalidCountryCode.hpp"

namespace Exceptions
{
  InvalidCountryCode::InvalidCountryCode(const std::string &countryCode)
      : std::runtime_error("Invalid country code: " + countryCode)
  {
  }
}