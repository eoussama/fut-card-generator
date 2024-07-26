#include <string>
#include <sstream>

#include "color.hpp"

namespace Card
{
  namespace Template
  {
    namespace Color
    {
      Base::Base(Hex hex) : hex(hex), rgb(rgbFromHex(hex)) {}
      Base::Base(RGB rgb) : rgb(rgb), hex(hexFromRGB(rgb)) {}

      RGB Base::getRGB() const { return rgb; }
      Hex Base::getHex() const { return hex; }

      std::string Base::toString()
      {
        return "Color(" + Base::rgbToString() + ", " + Base::hexToString() + ")";
      }

      Hex Base::hexFromRGB(RGB rgb)
      {
        Channel r = std::get<0>(rgb);
        Channel g = std::get<1>(rgb);
        Channel b = std::get<2>(rgb);

        return (static_cast<uint64_t>(r) << 16) | (static_cast<uint64_t>(g) << 8) | static_cast<uint64_t>(b);
      }

      RGB Base::rgbFromHex(Hex hex)
      {
        Channel r = (hex >> 16) & 0xFF;
        Channel g = (hex >> 8) & 0xFF;
        Channel b = hex & 0xFF;

        return std::make_tuple(r, g, b);
      }

      std::string Base::rgbToString()
      {
        return "RGB(" + std::to_string(std::get<0>(rgb)) + ", " + std::to_string(std::get<1>(rgb)) + ", " + std::to_string(std::get<2>(rgb)) + ")";
      }

      std::string Base::hexToString()
      {
        Hex tmp = hex;

        if (tmp == 0)
        {
          return "0x0";
        }
        else if (tmp < 0)
        {
          tmp = -tmp;
        }

        std::stringstream ss;
        ss << "0x" << std::hex << tmp;

        return "Hex(" + ss.str() + ")";
      }
    }
  }
}