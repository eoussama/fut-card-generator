#ifndef FAILEDIMAGESAVE_HPP
#define FAILEDIMAGESAVE_HPP

#include <stdexcept>

namespace Exceptions
{
  class FailedImageSave : public std::runtime_error
  {
  public:
    FailedImageSave(const std::string &path);
  };
}

#endif