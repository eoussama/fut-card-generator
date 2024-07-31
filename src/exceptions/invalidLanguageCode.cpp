#include "exceptions/invalidLanguageCode.hpp"

namespace Exceptions
{
  InvalidLanguageCode::InvalidLanguageCode(const std::string &languageCode)
      : std::runtime_error("Invalid language code: " + languageCode)
  {
  }
}