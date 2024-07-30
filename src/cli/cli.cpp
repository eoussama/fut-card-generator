#include "cli.hpp"

namespace Cli
{
  Params init(int argc, char *argv[])
  {
    Params params;
    argparse::ArgumentParser program(PROJECT_NAME, GLOBAL_VERSION);

    program.add_argument("name").help("Name of the player").required();
    // program.add_argument("image_path").help("Path to the player's image");
    // program.add_argument("club_logo_path").help("Path to the club logo image");
    // program.add_argument("country_code").default_value("MA").help("Country code of the player");
    // program.add_argument("position_code").default_value("ALL").help("Position of the player (ALL, GK, LB, LWB, CB, RB, RWB, LM, CDM, CM, CAM, RM, LW, RW, LF, CF, RF, ST)");
    // program.add_argument("stats").nargs(6).default_value(std::vector<int>{50, 50, 50, 50, 50, 50}).help("Stats of the player");

    // auto stats = program.get<std::vector<int>>("stats");
    // std::string imagePath = program.get<std::string>("image_path");
    // std::string countryCode = program.get<std::string>("country_code");
    // std::string positionCode = program.get<std::string>("position_code");
    // std::string clubLogoPath = program.get<std::string>("club_logo_path");

    // std::cout << "Name: " << name << std::endl;
    // std::cout << "Image: " << imagePath << std::endl;
    // std::cout << "Club logo: " << clubLogoPath << std::endl;
    // std::cout << "Country: " << countryCode << std::endl;
    // std::cout << "Position: " << positionCode << std::endl;
    // std::cout << "Stats: " << stats.at(0) << ", " << stats.at(1) << ", " << stats.at(2) << ", " << stats.at(3) << ", " << stats.at(4) << ", " << stats.at(5) << std::endl;

    try
    {
      program.parse_args(argc, argv);

      params.name = program.get<std::string>("name");
    }
    catch (const std::runtime_error &err)
    {
      std::cerr << err.what() << std::endl;
      std::cerr << program;
      exit(1);
    }

    return params;
  }
}