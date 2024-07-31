#ifndef INVALIDLANGUAGECODE_HPP
#define INVALIDLANGUAGECODE_HPP

#include <stdexcept>

namespace Exceptions
{
  class InvalidLanguageCode : public std::runtime_error
  {
  public:
    InvalidLanguageCode(const std::string &languageCode);
  };
}

#endif