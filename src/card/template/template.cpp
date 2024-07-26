#include <string>

#include "type.hpp"
#include "colors.hpp"
#include "template.hpp"

namespace Card
{
  namespace Template
  {
    std::string Base::getBackgroundPath(Edition const &edition)
    {
      std::string path;
      int editionNumber = (int)edition;
      path = "assets/bgs/" + std::to_string(editionNumber) + "/cards/" + background + ".png";

      return path;
    }

    Templates init()
    {
      Templates templates;

      templates[Code::COMMON_BRONZE] = {Type::STANDARD, "common_bronze", std::make_tuple(Color::Base(COLOR_COMMON_BRONZE), Color::Base(COLOR_COMMON_BRONZE))};
      templates[Code::COMMON_SILVER] = {Type::STANDARD, "common_silver", std::make_tuple(Color::Base(COLOR_COMMON_SILVER), Color::Base(COLOR_COMMON_SILVER))};
      templates[Code::COMMON_GOLD] = {Type::STANDARD, "common_gold", std::make_tuple(Color::Base(COLOR_COMMON_GOLD), Color::Base(COLOR_COMMON_GOLD))};
      templates[Code::RARE_BRONZE] = {Type::STANDARD, "rare_bronze", std::make_tuple(Color::Base(COLOR_RARE_BRONZE), Color::Base(COLOR_RARE_BRONZE))};
      templates[Code::RARE_SILVER] = {Type::STANDARD, "rare_silver", std::make_tuple(Color::Base(COLOR_RARE_SILVER), Color::Base(COLOR_RARE_SILVER))};
      templates[Code::RARE_GOLD] = {Type::STANDARD, "rare_gold", std::make_tuple(Color::Base(COLOR_RARE_GOLD), Color::Base(COLOR_RARE_GOLD))};
      templates[Code::IF_BRONZE] = {Type::STANDARD, "if_bronze", std::make_tuple(Color::Base(COLOR_IF_BRONZE), Color::Base(COLOR_IF_BRONZE))};
      templates[Code::IF_SILVER] = {Type::STANDARD, "if_silver", std::make_tuple(Color::Base(COLOR_IF_SILVER), Color::Base(COLOR_IF_SILVER))};
      templates[Code::IF_GOLD] = {Type::STANDARD, "if_gold", std::make_tuple(Color::Base(COLOR_IF_GOLD), Color::Base(COLOR_IF_GOLD))};
      templates[Code::FC_BRONZE] = {Type::STANDARD, "champion_bronze", std::make_tuple(Color::Base(COLOR_FC_BRONZE), Color::Base(COLOR_FC_BRONZE))};
      templates[Code::FC_SILVER] = {Type::STANDARD, "champion_silver", std::make_tuple(Color::Base(COLOR_FC_SILVER), Color::Base(COLOR_FC_SILVER))};
      templates[Code::FC_GOLD] = {Type::STANDARD, "champion_gold", std::make_tuple(Color::Base(COLOR_FC_GOLD), Color::Base(COLOR_FC_GOLD))};
      templates[Code::MOTM] = {Type::STANDARD, "motm", std::make_tuple(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER))};
      templates[Code::PL_POTM] = {Type::STANDARD, "potm_pl", std::make_tuple(Color::Base(COLOR_PL_POTM), Color::Base(COLOR_PL_POTM))};
      templates[Code::BL_POTM] = {Type::STANDARD, "potm_bundesliga", std::make_tuple(Color::Base(COLOR_BUNDESLIGA_POTM), Color::Base(COLOR_BUNDESLIGA_POTM))};
      templates[Code::FUTTIES] = {Type::STANDARD, "futties", std::make_tuple(Color::Base(COLOR_FUTTIES), Color::Base(COLOR_FUTTIES))};
      templates[Code::FUTTIESW] = {Type::STANDARD, "futties_winner", std::make_tuple(Color::Base(COLOR_FUTTIES), Color::Base(COLOR_FUTTIES))};
      templates[Code::TOTY] = {Type::STANDARD, "toty", std::make_tuple(Color::Base(COLOR_PORTICA), Color::Base(COLOR_PORTICA))};
      templates[Code::TOTY_N] = {Type::STANDARD, "toty_nominees", std::make_tuple(Color::Base(COLOR_PORTICA), Color::Base(COLOR_PORTICA))};
      templates[Code::EL] = {Type::STANDARD, "europa_league", std::make_tuple(Color::Base(COLOR_TANGERINE), Color::Base(COLOR_TANGERINE))};
      templates[Code::EL_MOTM] = {Type::STANDARD, "europa_league_motm", std::make_tuple(Color::Base(COLOR_WHITE_SMOKE), Color::Base(COLOR_BLACK))};
      templates[Code::EL_LIVE] = {Type::STANDARD, "europa_league_live", std::make_tuple(Color::Base(COLOR_TANGERINE), Color::Base(COLOR_TANGERINE))};
      templates[Code::EL_SBC] = {Type::STANDARD, "europa_league_sbc", std::make_tuple(Color::Base(COLOR_BLACK), Color::Base(COLOR_BLACK))};
      templates[Code::EL_TOTT] = {Type::STANDARD, "europa_league_tott", std::make_tuple(Color::Base(COLOR_WHITE_SMOKE), Color::Base(COLOR_WHITE_SMOKE))};
      templates[Code::COMMON_UCL] = {Type::UCL, "ucl_common", std::make_tuple(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER))};
      templates[Code::RARE_UCL] = {Type::UCL, "ucl_rare", std::make_tuple(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER))};
      templates[Code::UCL_MOTM] = {Type::UCL, "ucl_motm", std::make_tuple(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER))};
      templates[Code::UCL_LIVE] = {Type::UCL, "ucl_live", std::make_tuple(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER))};
      templates[Code::UCL_SBC] = {Type::UCL, "ucl_sbc", std::make_tuple(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER))};
      templates[Code::UCL_TOTT] = {Type::UCL, "ucl_tott", std::make_tuple(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER))};
      templates[Code::FSR] = {Type::UCL, "fut_swap_rewards", std::make_tuple(Color::Base(COLOR_FUT_SWAP_REWARDS), Color::Base(COLOR_FUT_SWAP_REWARDS))};
      templates[Code::FS] = {Type::UCL, "future_stars", std::make_tuple(Color::Base(COLOR_FUTURE_STARS), Color::Base(COLOR_FUTURE_STARS))};
      templates[Code::FSN] = {Type::UCL, "future_stars_nominees", std::make_tuple(Color::Base(COLOR_FUTURE_STARS), Color::Base(COLOR_FUTURE_STARS))};
      templates[Code::PP] = {Type::UCL, "pro_player", std::make_tuple(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER))};
      templates[Code::CB] = {Type::UCL, "carniball", std::make_tuple(Color::Base(COLOR_BRAZILIAN_YELLOW), Color::Base(COLOR_BRAZILIAN_YELLOW))};
      templates[Code::RB] = {Type::UCL, "record_breaker", std::make_tuple(Color::Base(COLOR_SPRING_BUD), Color::Base(COLOR_SPRING_BUD))};
      templates[Code::HERO] = {Type::UCL, "hero", std::make_tuple(Color::Base(COLOR_PHOCA), Color::Base(COLOR_PHOCA))};
      templates[Code::AW] = {Type::UCL, "award_winner", std::make_tuple(Color::Base(COLOR_AWARD_WINNER), Color::Base(COLOR_AWARD_WINNER))};
      templates[Code::FB] = {Type::UCL, "flashback", std::make_tuple(Color::Base(COLOR_FLASHBACK), Color::Base(COLOR_FLASHBACK))};
      templates[Code::HEADLINERS] = {Type::UCL, "headliners", std::make_tuple(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER))};
      templates[Code::CC] = {Type::UCL, "concept", std::make_tuple(Color::Base(COLOR_CONCEPT), Color::Base(COLOR_CONCEPT))};
      templates[Code::SBC] = {Type::UCL, "sbc", std::make_tuple(Color::Base(COLOR_SQUAD_BUILDER), Color::Base(COLOR_SQUAD_BUILDER))};
      templates[Code::SBCP] = {Type::UCL, "sbc_premium", std::make_tuple(Color::Base(COLOR_SQUAD_BUILDER_PREMIUM), Color::Base(COLOR_SQUAD_BUILDER_PREMIUM))};
      templates[Code::LEGEND] = {Type::UCL, "legend", std::make_tuple(Color::Base(COLOR_LEGEND), Color::Base(COLOR_LEGEND))};

      return templates;
    }
  }
}