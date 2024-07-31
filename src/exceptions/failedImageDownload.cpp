#include "exceptions/failedImageDownload.hpp"

namespace Exceptions
{
  FailedImageDownload::FailedImageDownload(const std::string &url) : std::runtime_error("Failed to download image from " + url)
  {
  }
}