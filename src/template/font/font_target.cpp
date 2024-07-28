#include "edition.hpp"
#include "font_target.hpp"

namespace Template
{
  namespace Font
  {
    Target::Target(Base overall, Base position, Base name, Base value, Base label)
        : overall(overall), position(position), name(name), value(value), label(label)
    {
    }

    std::string getPath(Base font, Card::Edition const &edition)
    {
      std::string path;
      int editionNumber = (int)edition;
      std::string type = typeToString(font.type);
      path = "assets/bgs/" + std::to_string(editionNumber) + "/fonts/" + font.name + "." + type;

      return path;
    }

    Fonts init()
    {
      Fonts fonts;

      fonts[Code::DIN_PRO_COND] = Target(
          Base(FONT_DIN_PRO_COND_MEDIUM, Type::OTF, 120),
          Base(FONT_DIN_PRO_COND, Type::OTF, 50),
          Base(FONT_DIN_PRO_COND_BOLD, Type::OTF, 70),
          Base(FONT_DIN_PRO_COND_BOLD, Type::OTF, 55),
          Base(FONT_DIN_PRO_COND, Type::OTF, 50));

      fonts[Code::CHAMPIONS] = Target(
          Base(FONT_CHAMPTIONS_REGULAR, Type::OTF, 115),
          Base(FONT_CHAMPTIONS_REGULAR, Type::OTF, 50),
          Base(FONT_CHAMPTIONS_REGULAR, Type::OTF, 68),
          Base(FONT_CHAMPTIONS_REGULAR, Type::OTF, 55),
          Base(FONT_CHAMPTIONS_REGULAR, Type::OTF, 50));

      return fonts;
    }
  }
}