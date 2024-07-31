#include "exceptions/failedImageLoad.hpp"

namespace Exceptions
{
  FailedImageLoad::FailedImageLoad(const std::string &path) : std::runtime_error("Failed to load image from " + path)
  {
  }
}