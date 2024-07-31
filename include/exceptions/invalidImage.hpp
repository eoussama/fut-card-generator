#ifndef INVALIDIMAGE_HPP
#define INVALIDIMAGE_HPP

#include <stdexcept>

namespace Exceptions
{
  class InvalidImage : public std::runtime_error
  {
  public:
    InvalidImage();
  };
}

#endif