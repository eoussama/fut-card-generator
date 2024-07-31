#include "exceptions/failedFontLoad.hpp"

namespace Exceptions
{
  FailedFontLoad::FailedFontLoad(const std::string &path) : std::runtime_error("Failed to load font from " + path)
  {
  }
}