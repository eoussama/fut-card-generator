#include "exceptions/invalidTemplateCode.hpp"

namespace Exceptions
{
  InvalidTemplateCode::InvalidTemplateCode(const std::string &templateCode)
      : std::runtime_error("Invalid template code: " + templateCode)
  {
  }
}