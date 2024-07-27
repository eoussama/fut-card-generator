#ifndef COLOR_HPP
#define COLOR_HPP

#include <tuple>
#include <cstdint>

namespace Card
{
  namespace Template
  {
    namespace Color
    {
      typedef uint64_t Hex;
      typedef uint8_t Channel;
      typedef std::tuple<int, int, int> RGB;

      class Base
      {
      public:
        Base(RGB rgb);
        Base(Hex hex);
        Base() = default;

        RGB getRGB() const;
        Hex getHex() const;

        std::string toString();

      protected:
      private:
        RGB rgb;
        Hex hex;

        Hex hexFromRGB(RGB rgb);
        RGB rgbFromHex(Hex hex);

        std::string rgbToString();
        std::string hexToString();
      };
    }
  }
}

#endif