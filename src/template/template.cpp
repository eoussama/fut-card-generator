#include <tuple>
#include <string>

#include "colors.hpp"
#include "template.hpp"
#include "card_type.hpp"

namespace Template
{
  std::string Base::getBackgroundPath(Card::Edition const &edition)
  {
    std::string path;
    int editionNumber = (int)edition;
    path = "assets/bgs/" + std::to_string(editionNumber) + "/cards/" + background + ".png";

    return path;
  }

  Templates init()
  {
    Templates templates;

    templates[Code::COMMON_BRONZE] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_COMMON_BRONZE), Color::Base(COLOR_COMMON_BRONZE)), Font::Code::DIN_PRO_COND, "common_bronze"};
    templates[Code::COMMON_SILVER] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_COMMON_SILVER), Color::Base(COLOR_COMMON_SILVER)), Font::Code::DIN_PRO_COND, "common_silver"};
    templates[Code::COMMON_GOLD] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_COMMON_GOLD), Color::Base(COLOR_COMMON_GOLD)), Font::Code::DIN_PRO_COND, "common_gold"};
    templates[Code::RARE_BRONZE] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_RARE_BRONZE), Color::Base(COLOR_RARE_BRONZE)), Font::Code::DIN_PRO_COND, "rare_bronze"};
    templates[Code::RARE_SILVER] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_RARE_SILVER), Color::Base(COLOR_RARE_SILVER)), Font::Code::DIN_PRO_COND, "rare_silver"};
    templates[Code::RARE_GOLD] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_RARE_GOLD), Color::Base(COLOR_RARE_GOLD)), Font::Code::DIN_PRO_COND, "rare_gold"};
    templates[Code::IF_BRONZE] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_IF_BRONZE), Color::Base(COLOR_IF_BRONZE)), Font::Code::DIN_PRO_COND, "if_bronze"};
    templates[Code::IF_SILVER] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_IF_SILVER), Color::Base(COLOR_IF_SILVER)), Font::Code::DIN_PRO_COND, "if_silver"};
    templates[Code::IF_GOLD] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_IF_GOLD), Color::Base(COLOR_IF_GOLD)), Font::Code::DIN_PRO_COND, "if_gold"};
    templates[Code::FC_BRONZE] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FC_BRONZE), Color::Base(COLOR_FC_BRONZE)), Font::Code::DIN_PRO_COND, "champion_bronze"};
    templates[Code::FC_SILVER] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FC_SILVER), Color::Base(COLOR_FC_SILVER)), Font::Code::DIN_PRO_COND, "champion_silver"};
    templates[Code::FC_GOLD] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FC_GOLD), Color::Base(COLOR_FC_GOLD)), Font::Code::DIN_PRO_COND, "champion_gold"};
    templates[Code::MOTM] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER)), Font::Code::DIN_PRO_COND, "motm"};
    templates[Code::PL_POTM] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_PL_POTM), Color::Base(COLOR_PL_POTM)), Font::Code::DIN_PRO_COND, "potm_pl"};
    templates[Code::BL_POTM] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_BUNDESLIGA_POTM), Color::Base(COLOR_BUNDESLIGA_POTM)), Font::Code::DIN_PRO_COND, "potm_bundesliga"};
    templates[Code::FUTTIES] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FUTTIES), Color::Base(COLOR_FUTTIES)), Font::Code::DIN_PRO_COND, "futties"};
    templates[Code::FUTTIESW] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FUTTIES), Color::Base(COLOR_FUTTIES)), Font::Code::DIN_PRO_COND, "futties_winner"};
    templates[Code::TOTY] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_PORTICA), Color::Base(COLOR_PORTICA)), Font::Code::DIN_PRO_COND, "toty"};
    templates[Code::TOTY_N] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_PORTICA), Color::Base(COLOR_PORTICA)), Font::Code::DIN_PRO_COND, "toty_nominees"};
    templates[Code::EL] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_TANGERINE), Color::Base(COLOR_TANGERINE)), Font::Code::DIN_PRO_COND, "europa_league"};
    templates[Code::EL_MOTM] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_WHITE_SMOKE), Color::Base(COLOR_BLACK)), Font::Code::DIN_PRO_COND, "europa_league_motm"};
    templates[Code::EL_LIVE] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_TANGERINE), Color::Base(COLOR_TANGERINE)), Font::Code::DIN_PRO_COND, "europa_league_live"};
    templates[Code::EL_SBC] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_BLACK), Color::Base(COLOR_BLACK)), Font::Code::DIN_PRO_COND, "europa_league_sbc"};
    templates[Code::EL_TOTT] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_WHITE_SMOKE), Color::Base(COLOR_WHITE_SMOKE)), Font::Code::DIN_PRO_COND, "europa_league_tott"};
    templates[Code::COMMON_UCL] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER)), Font::Code::CHAMPIONS, "ucl_common"};
    templates[Code::RARE_UCL] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER)), Font::Code::CHAMPIONS, "ucl_rare"};
    templates[Code::UCL_MOTM] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER)), Font::Code::CHAMPIONS, "ucl_motm"};
    templates[Code::UCL_LIVE] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER)), Font::Code::CHAMPIONS, "ucl_live"};
    templates[Code::UCL_SBC] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER)), Font::Code::CHAMPIONS, "ucl_sbc"};
    templates[Code::UCL_TOTT] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER)), Font::Code::CHAMPIONS, "ucl_tott"};
    templates[Code::FSR] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_FUT_SWAP_REWARDS), Color::Base(COLOR_FUT_SWAP_REWARDS)), Font::Code::DIN_PRO_COND, "fut_swap_rewards"};
    templates[Code::FS] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_FUTURE_STARS), Color::Base(COLOR_FUTURE_STARS)), Font::Code::DIN_PRO_COND, "future_stars"};
    templates[Code::FSN] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_FUTURE_STARS), Color::Base(COLOR_FUTURE_STARS)), Font::Code::DIN_PRO_COND, "future_stars_nominees"};
    templates[Code::PP] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER)), Font::Code::DIN_PRO_COND, "pro_player"};
    templates[Code::CB] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_BRAZILIAN_YELLOW), Color::Base(COLOR_BRAZILIAN_YELLOW)), Font::Code::DIN_PRO_COND, "carniball"};
    templates[Code::RB] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_SPRING_BUD), Color::Base(COLOR_SPRING_BUD)), Font::Code::DIN_PRO_COND, "record_breaker"};
    templates[Code::HERO] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_PHOCA), Color::Base(COLOR_PHOCA)), Font::Code::DIN_PRO_COND, "hero"};
    templates[Code::AW] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_AWARD_WINNER), Color::Base(COLOR_AWARD_WINNER)), Font::Code::DIN_PRO_COND, "award_winner"};
    templates[Code::FB] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_FLASHBACK), Color::Base(COLOR_FLASHBACK)), Font::Code::DIN_PRO_COND, "flashback"};
    templates[Code::HEADLINERS] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER)), Font::Code::DIN_PRO_COND, "headliners"};
    templates[Code::CC] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_CONCEPT), Color::Base(COLOR_CONCEPT)), Font::Code::DIN_PRO_COND, "concept"};
    templates[Code::SBC] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_SQUAD_BUILDER), Color::Base(COLOR_SQUAD_BUILDER)), Font::Code::DIN_PRO_COND, "sbc"};
    templates[Code::SBCP] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_SQUAD_BUILDER_PREMIUM), Color::Base(COLOR_SQUAD_BUILDER_PREMIUM)), Font::Code::DIN_PRO_COND, "sbc_premium"};
    templates[Code::LEGEND] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_LEGEND), Color::Base(COLOR_LEGEND)), Font::Code::DIN_PRO_COND, "legend"};

    return templates;
  }
}