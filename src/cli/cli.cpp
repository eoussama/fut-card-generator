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

    program.add_argument("-t", "--translation")
        .default_value("en")
        .choices("en", "fr", "es", "pt", "it", "de")
        .help("Transaltion of the text on the card");

    program
        .add_argument("-c", "--country")
        .default_value("ma")
        .help("Country code of the player");

    program
        .add_argument("-l", "--logo")
        .help("Path to the club logo image")
        .default_value("./assets/clubs/1.png");

    program
        .add_argument("-i", "--image")
        .help("Path to the player's image")
        .default_value("./assets/defaults/person.png");

    program
        .add_argument("-p", "--position")
        .default_value("all")
        .help("Position of the player")
        .choices("gk", "lb", "lwb", "cb", "rb", "rwb", "lm", "cdm", "cm", "cam", "rm", "lw", "rw", "lf", "cf", "rf", "st", "all");

    program
        .add_argument("-c", "--country")
        .default_value("ma")
        .help("Country code of the player");

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

    try
    {
      program.parse_args(argc, argv);

      readOut(program, params);
      readName(program, params);
      readLogo(program, params);
      readImage(program, params);
      readStats(program, params);
      readCountry(program, params);
      readPosition(program, params);
      readLanguage(program, params);
    }
    catch (const std::runtime_error &err)
    {
      std::cerr << err.what() << std::endl;
      std::cerr << program;
      exit(1);
    }

    return params;
  }

  void readName(argparse::ArgumentParser &program, Params &params)
  {
    try
    {
      params.name = program.get<std::string>("name");
    }
    catch (const std::runtime_error &err)
    {
      std::cerr << err.what() << std::endl;
      std::cerr << program;
      exit(1);
    }
  }

  void readLogo(argparse::ArgumentParser &program, Params &params)
  {
    try
    {
      params.logo = program.get<std::string>("logo");
    }
    catch (const std::runtime_error &err)
    {
      std::cerr << err.what() << std::endl;
      std::cerr << program;
      exit(1);
    }
  }

  void readImage(argparse::ArgumentParser &program, Params &params)
  {
    try
    {
      params.image = program.get<std::string>("image");
    }
    catch (const std::runtime_error &err)
    {
      std::cerr << err.what() << std::endl;
      std::cerr << program;
      exit(1);
    }
  }

  void readStats(argparse::ArgumentParser &program, Params &params)
  {
    try
    {
      int pace = program.get<int>("pac");
      int passing = program.get<int>("pas");
      int physical = program.get<int>("phy");
      int shooting = program.get<int>("sho");
      int dribbling = program.get<int>("dri");
      int defending = program.get<int>("def");

      params.stats = Player::Stats(pace, passing, physical, shooting, dribbling, defending);
    }
    catch (const std::runtime_error &err)
    {
      std::cerr << err.what() << std::endl;
      std::cerr << program;
      exit(1);
    }
  }

  void readCountry(argparse::ArgumentParser &program, Params &params)
  {
    try
    {
      std::string countryCode = program.get<std::string>("country");
      params.country = Player::stringToCountry(countryCode);

      if (params.country == Player::Country::UNKNOWN)
      {
        throw std::runtime_error("Invalid country code");
      }
    }
    catch (const std::runtime_error &err)
    {
      std::cerr << err.what() << std::endl;
      std::cerr << program;
      exit(1);
    }
  }

  void readPosition(argparse::ArgumentParser &program, Params &params)
  {
    try
    {
      std::string positionCode = program.get<std::string>("position");
      params.position = Player::stringToPosition(positionCode);
    }
    catch (const std::runtime_error &err)
    {
      std::cerr << err.what() << std::endl;
      std::cerr << program;
      exit(1);
    }
  }

  void readOut(argparse::ArgumentParser &program, Params &params)
  {
    try
    {
      params.out = program.get<std::string>("out");
    }
    catch (const std::runtime_error &err)
    {
      std::cerr << err.what() << std::endl;
      std::cerr << program;
      exit(1);
    }
  }

  void readLanguage(argparse::ArgumentParser &program, Params &params)
  {
    try
    {
      std::string languageCode = program.get<std::string>("translation");
      params.language = Core::I18N::stringToLanguage(languageCode);
    }
    catch (const std::runtime_error &err)
    {
      std::cerr << err.what() << std::endl;
      std::cerr << program;
      exit(1);
    }
  }
}