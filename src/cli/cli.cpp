#include "cli.hpp"

namespace Cli
{
  Params init(int argc, char *argv[])
  {
    Params params;
    argparse::ArgumentParser program(PROJECT_NAME, GLOBAL_VERSION);

    program
        .add_argument("-n", "--name")
        .help("Name of the player")
        .required();

    program
        .add_argument("-o", "--out")
        .help("Path to the output image")
        .default_value("./out.png");

    program
        .add_argument("-s", "--show")
        .help("Show a preview of the card")
        .flag();

    program
        .add_argument("-l", "--logo")
        .help("Path to the club logo image")
        .default_value("./assets/clubs/1.png");

    program
        .add_argument("-i", "--image")
        .help("Path to the player's image")
        .default_value("./assets/defaults/person.png");

    program.add_argument("-t", "--translation")
        .default_value("en")
        .choices("en", "fr", "es", "pt", "it", "de")
        .help("Transaltion of the text on the card");

    program.add_argument("-e", "--edition")
        .default_value("fifa19")
        .choices("fifa19")
        .help("Code for the edition of the card");

    program
        .add_argument("-k", "--kind")
        .default_value("common_bronze")
        .choices("common_bronze", "common_silver", "common_gold", "rare_bronze", "rare_silver", "rare_gold", "if_bronze", "if_silver", "if_gold", "fc_bronze", "fc_silver", "fc_gold", "motm", "pl_potm", "bl_potm", "futties", "futtiesw", "toty", "toty_n", "el", "el_motm", "el_live", "el_sbc", "el_tott", "common_ucl", "rare_ucl", "ucl_motm", "ucl_live", "ucl_sbc", "ucl_tott", "fsr", "fs", "fsn", "pp", "cb", "rb", "hero", "aw", "fb", "headliners", "cc", "sbc", "sbcp", "legend", "fs1", "fs2")
        .help("Code for the template of the card");

    program
        .add_argument("-c", "--country")
        .default_value("ma")
        .help("Country code of the player");

    program
        .add_argument("-p", "--position")
        .default_value("all")
        .help("Position of the player")
        .choices("gk", "lb", "lwb", "cb", "rb", "rwb", "lm", "cdm", "cm", "cam", "rm", "lw", "rw", "lf", "cf", "rf", "st", "all");

    program
        .add_argument("-pac", "--pace")
        .default_value(50)
        .scan<'d', int>()
        .help("Pace of the player");

    program
        .add_argument("-pas", "--passing")
        .default_value(50)
        .scan<'d', int>()
        .help("Passing of the player");

    program
        .add_argument("-phy", "--physical")
        .default_value(50)
        .scan<'d', int>()
        .help("Physical of the player");

    program
        .add_argument("-sho", "--shooting")
        .default_value(50)
        .scan<'d', int>()
        .help("Shooting of the player");

    program
        .add_argument("-dri", "--dribbling")
        .default_value(50)
        .scan<'d', int>()
        .help("Dribbling of the player");

    program
        .add_argument("-def", "--defending")
        .default_value(50)
        .scan<'d', int>()
        .help("Defending of the player");

    program.parse_args(argc, argv);

    readOut(program, params);
    readName(program, params);
    readLogo(program, params);
    readType(program, params);
    readShow(program, params);
    readImage(program, params);
    readStats(program, params);
    readEdition(program, params);
    readCountry(program, params);
    readPosition(program, params);
    readLanguage(program, params);

    return params;
  }

  void readName(argparse::ArgumentParser &program, Params &params)
  {
    params.name = program.get<std::string>("name");
  }

  void readLogo(argparse::ArgumentParser &program, Params &params)
  {
    params.logo = program.get<std::string>("logo");
  }

  void readImage(argparse::ArgumentParser &program, Params &params)
  {
    params.image = program.get<std::string>("image");
  }

  void readStats(argparse::ArgumentParser &program, Params &params)
  {
    int pace = program.get<int>("pac");
    int passing = program.get<int>("pas");
    int physical = program.get<int>("phy");
    int shooting = program.get<int>("sho");
    int dribbling = program.get<int>("dri");
    int defending = program.get<int>("def");

    params.stats = Player::Stats(pace, passing, physical, shooting, dribbling, defending);
  }

  void readCountry(argparse::ArgumentParser &program, Params &params)
  {
    std::string countryCode = program.get<std::string>("country");
    params.country = Player::stringToCountry(countryCode);

    if (params.country == Player::Country::UNKNOWN)
    {
      throw Exceptions::InvalidCountryCode(countryCode);
    }
  }

  void readPosition(argparse::ArgumentParser &program, Params &params)
  {
    std::string positionCode = program.get<std::string>("position");
    params.position = Player::stringToPosition(positionCode);
  }

  void readOut(argparse::ArgumentParser &program, Params &params)
  {
    params.out = program.get<std::string>("out");
  }

  void readLanguage(argparse::ArgumentParser &program, Params &params)
  {
    std::string languageCode = program.get<std::string>("translation");
    params.language = Core::I18N::stringToLanguage(languageCode);

    if (params.language == Core::I18N::Language::UNKNOWN)
    {
      throw Exceptions::InvalidLanguageCode(languageCode);
    }
  }

  void readType(argparse::ArgumentParser &program, Params &params)
  {
    std::string typeCode = program.get<std::string>("kind");
    params.type = Template::stringToCode(typeCode);

    if (params.type == Template::Code::UNKNOWN)
    {
      throw Exceptions::InvalidTemplateCode(typeCode);
    }
  }

  void readEdition(argparse::ArgumentParser &program, Params &params)
  {
    std::string editionCode = program.get<std::string>("edition");
    params.edition = Card::stringToEdition(editionCode);

    if (params.edition == Card::Edition::UNKNOWN)
    {
      throw Exceptions::InvalidEditionCode(editionCode);
    }
  }

  void readShow(argparse::ArgumentParser &program, Params &params)
  {
    params.show = program.get<bool>("show");
  }
}
