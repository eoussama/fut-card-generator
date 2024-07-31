#ifndef INVALIDEDITIONCODE_HPP
#define INVALIDEDITIONCODE_HPP

#include <stdexcept>

namespace Exceptions
{
  class InvalidEditionCode : public std::runtime_error
  {
  public:
    InvalidEditionCode(const std::string &editionCode);
  };
}

#endif