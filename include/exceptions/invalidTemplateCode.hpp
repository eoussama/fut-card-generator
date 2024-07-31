#ifndef INVALIDTEMPLATECODE_HPP
#define INVALIDTEMPLATECODE_HPP

#include <stdexcept>

namespace Exceptions
{
  class InvalidTemplateCode : public std::runtime_error
  {
  public:
    InvalidTemplateCode(const std::string &templateCode);
  };
}

#endif