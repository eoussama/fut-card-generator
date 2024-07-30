#include "cli.hpp"

namespace Cli
{
  Params init(int argc, char *argv[])
  {
    Params params;
    argparse::ArgumentParser program(PROJECT_NAME, GLOBAL_VERSION);

    program.add_argument("-n", "--name").help("Name of the player").required();
    program.add_argument("-c", "--country").default_value("ma").help("Country code of the player");
    program.add_argument("-l", "--logo").help("Path to the club logo image").default_value("./assets/clubs/1.png");
    program.add_argument("-i", "--image").help("Path to the player's image").default_value("./assets/defaults/person.png");
    // program.add_argument("-p", "--position").default_value("ALL").help("Position of the player (ALL, GK, LB, LWB, CB, RB, RWB, LM, CDM, CM, CAM, RM, LW, RW, LF, CF, RF, ST)");
    // program.add_argument("stats").nargs(6).default_value(std::vector<int>{50, 50, 50, 50, 50, 50}).help("Stats of the player");

    // auto stats = program.get<std::vector<int>>("stats");
    // std::string imagePath = program.get<std::string>("image_path");
    // std::string countryCode = program.get<std::string>("country_code");
    // std::string positionCode = program.get<std::string>("position_code");
    // std::string clubLogoPath = program.get<std::string>("club_logo_path");

    try
    {
      program.parse_args(argc, argv);

      params.name = program.get<std::string>("name");
      params.logo = program.get<std::string>("logo");
      params.image = program.get<std::string>("image");
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