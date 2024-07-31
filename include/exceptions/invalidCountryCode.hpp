#ifndef INVALIDCOUNTRYCODE_HPP
#define INVALIDCOUNTRYCODE_HPP

#include <stdexcept>

namespace Exceptions
{
  class InvalidCountryCode : public std::runtime_error
  {
  public:
    InvalidCountryCode(const std::string &countryCode);
  };
}

#endif