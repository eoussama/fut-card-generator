#ifndef FAILEDDRAW_HPP
#define FAILEDDRAW_HPP

#include <stdexcept>

namespace Exceptions
{
  class FailedDraw : public std::runtime_error
  {
  public:
    FailedDraw();
  };
}

#endif