#include "type.hpp"
#include "template.hpp"

namespace Card
{
  namespace Template
  {
    Templates init()
    {
      Templates templates;

      templates[Code::COMMON_BRONZE] = {Type::STANDARD, "common_bronze"};
      templates[Code::COMMON_SILVER] = {Type::STANDARD, "common_silver"};
      templates[Code::COMMON_GOLD] = {Type::STANDARD, "common_gold"};
      templates[Code::RARE_BRONZE] = {Type::STANDARD, "rare_bronze"};
      templates[Code::RARE_SILVER] = {Type::STANDARD, "rare_silver"};
      templates[Code::RARE_GOLD] = {Type::STANDARD, "rare_gold"};
      templates[Code::IF_BRONZE] = {Type::STANDARD, "if_bronze"};
      templates[Code::IF_SILVER] = {Type::STANDARD, "if_silver"};
      templates[Code::IF_GOLD] = {Type::STANDARD, "if_gold"};
      templates[Code::FC_BRONZE] = {Type::STANDARD, "champion_bronze"};
      templates[Code::FC_SILVER] = {Type::STANDARD, "champion_silver"};
      templates[Code::FC_GOLD] = {Type::STANDARD, "champion_gold"};
      templates[Code::MOTM] = {Type::STANDARD, "motm"};
      templates[Code::PL_POTM] = {Type::STANDARD, "potm_pl"};
      templates[Code::BL_POTM] = {Type::STANDARD, "potm_bundesliga"};
      templates[Code::FUTTIES] = {Type::STANDARD, "futties"};
      templates[Code::FUTTIESW] = {Type::STANDARD, "futties_winner"};
      templates[Code::TOTY] = {Type::STANDARD, "toty"};
      templates[Code::TOTY_N] = {Type::STANDARD, "toty_nominees"};
      templates[Code::EL] = {Type::STANDARD, "europa_league"};
      templates[Code::EL_MOTM] = {Type::STANDARD, "europa_league_motm"};
      templates[Code::EL_LIVE] = {Type::STANDARD, "europa_league_live"};
      templates[Code::EL_SBC] = {Type::STANDARD, "europa_league_sbc"};
      templates[Code::EL_TOTT] = {Type::STANDARD, "europa_league_tott"};
      templates[Code::COMMON_UCL] = {Type::UCL, "ucl_common"};
      templates[Code::RARE_UCL] = {Type::UCL, "ucl_rare"};
      templates[Code::UCL_MOTM] = {Type::UCL, "ucl_motm"};
      templates[Code::UCL_LIVE] = {Type::UCL, "ucl_live"};
      templates[Code::UCL_SBC] = {Type::UCL, "ucl_sbc"};
      templates[Code::UCL_TOTT] = {Type::UCL, "ucl_tott"};
      templates[Code::FSR] = {Type::UCL, "fut_swap_rewards"};
      templates[Code::FS] = {Type::UCL, "future_stars"};
      templates[Code::FSN] = {Type::UCL, "future_stars_nominees"};
      templates[Code::PP] = {Type::UCL, "pro_player"};
      templates[Code::CB] = {Type::UCL, "carniball"};
      templates[Code::RB] = {Type::UCL, "record_breaker"};
      templates[Code::HERO] = {Type::UCL, "hero"};
      templates[Code::AW] = {Type::UCL, "award_winner"};
      templates[Code::FB] = {Type::UCL, "flashback"};
      templates[Code::HEADLINERS] = {Type::UCL, "headliners"};
      templates[Code::CC] = {Type::UCL, "concept"};
      templates[Code::SBC] = {Type::UCL, "sbc"};
      templates[Code::SBCP] = {Type::UCL, "sbc_premium"};
      templates[Code::LEGEND] = {Type::UCL, "legend"};

      return templates;
    }
  }
}