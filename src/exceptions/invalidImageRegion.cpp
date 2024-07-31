#include <exceptions/invalidImageRegion.hpp>

namespace exceptions
{
  InvalidImageRegion::InvalidImageRegion(const std::string &target) : std::runtime_error(target) {}
}