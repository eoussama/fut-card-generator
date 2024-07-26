#ifndef COLOR_H
#define COLOR_H

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
        Base() = default;

        Base(RGB rgb);
        Base(Hex hex);

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