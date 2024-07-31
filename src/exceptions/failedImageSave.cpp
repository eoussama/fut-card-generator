#include "exceptions/failedImageSave.hpp"

namespace Exceptions
{
  FailedImageSave::FailedImageSave(const std::string &path) : std::runtime_error("Failed to save image to " + path)
  {
  }
}