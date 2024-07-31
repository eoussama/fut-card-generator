#include "exceptions/invalidImage.hpp"

namespace Exceptions
{
  InvalidImage::InvalidImage() : std::runtime_error("Image does not meet the required properties")
  {
  }
}