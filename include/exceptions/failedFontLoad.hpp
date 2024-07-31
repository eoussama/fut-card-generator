#ifndef FAILEDFONTLOAD_HPP
#define FAILEDFONTLOAD_HPP

#include <stdexcept>

namespace Exceptions
{
  class FailedFontLoad : public std::runtime_error
  {
  public:
    FailedFontLoad(const std::string &path);
  };
}

#endif