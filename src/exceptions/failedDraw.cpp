#include "exceptions/failedDraw.hpp"

namespace Exceptions
{
  FailedDraw::FailedDraw() : std::runtime_error("Failed to draw text")
  {
  }
}