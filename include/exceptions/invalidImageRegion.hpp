#ifndef INVALIDIMAGEREGION_HPP
#define INVALIDIMAGEREGION_HPP

#include <stdexcept>

namespace exceptions
{

  class InvalidImageRegion : public std::runtime_error
  {
  public:
    InvalidImageRegion(const std::string &target);
  };

}

#endif