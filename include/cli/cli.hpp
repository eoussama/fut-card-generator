#ifndef CLI_HPP
#define CLI_HPP

#include <string>
#include <argparse/argparse.hpp>

#include "params.hpp"

namespace Cli
{
  Params init(int argc, char *argv[]);

  void readOut(argparse::ArgumentParser &program, Params &params);
  void readName(argparse::ArgumentParser &program, Params &params);
  void readLogo(argparse::ArgumentParser &program, Params &params);
  void readType(argparse::ArgumentParser &program, Params &params);
  void readImage(argparse::ArgumentParser &program, Params &params);
  void readStats(argparse::ArgumentParser &program, Params &params);
  void readCountry(argparse::ArgumentParser &program, Params &params);
  void readPosition(argparse::ArgumentParser &program, Params &params);
  void readLanguage(argparse::ArgumentParser &program, Params &params);
}

#endif