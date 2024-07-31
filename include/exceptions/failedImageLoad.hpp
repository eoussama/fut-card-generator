#ifndef FAILEDIMAGELOAD_HPP
#define FAILEDIMAGELOAD_HPP

#include <stdexcept>

namespace Exceptions
{
  class FailedImageLoad : public std::runtime_error
  {
  public:
    FailedImageLoad(const std::string &path);
  };
}

#endif