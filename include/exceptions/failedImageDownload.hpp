#ifndef FAILEDIMAGEDOWNLOAD_HPP
#define FAILEDIMAGEDOWNLOAD_HPP

#include <stdexcept>

namespace Exceptions
{
  class FailedImageDownload : public std::runtime_error
  {
  public:
    FailedImageDownload(const std::string &url);
  };
}

#endif