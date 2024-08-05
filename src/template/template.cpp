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

    templates[Card::Edition::FIFA19][Code::COMMON_BRONZE] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_COMMON_BRONZE), Color::Base(COLOR_COMMON_BRONZE)), Font::Code::DIN_PRO_COND, "common_bronze"};
    templates[Card::Edition::FIFA19][Code::COMMON_SILVER] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_COMMON_SILVER), Color::Base(COLOR_COMMON_SILVER)), Font::Code::DIN_PRO_COND, "common_silver"};
    templates[Card::Edition::FIFA19][Code::COMMON_GOLD] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_COMMON_GOLD), Color::Base(COLOR_COMMON_GOLD)), Font::Code::DIN_PRO_COND, "common_gold"};
    templates[Card::Edition::FIFA19][Code::RARE_BRONZE] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_RARE_BRONZE), Color::Base(COLOR_RARE_BRONZE)), Font::Code::DIN_PRO_COND, "rare_bronze"};
    templates[Card::Edition::FIFA19][Code::RARE_SILVER] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_RARE_SILVER), Color::Base(COLOR_RARE_SILVER)), Font::Code::DIN_PRO_COND, "rare_silver"};
    templates[Card::Edition::FIFA19][Code::RARE_GOLD] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_RARE_GOLD), Color::Base(COLOR_RARE_GOLD)), Font::Code::DIN_PRO_COND, "rare_gold"};
    templates[Card::Edition::FIFA19][Code::IF_BRONZE] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_IF_BRONZE), Color::Base(COLOR_IF_BRONZE)), Font::Code::DIN_PRO_COND, "if_bronze"};
    templates[Card::Edition::FIFA19][Code::IF_SILVER] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_IF_SILVER), Color::Base(COLOR_IF_SILVER)), Font::Code::DIN_PRO_COND, "if_silver"};
    templates[Card::Edition::FIFA19][Code::IF_GOLD] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_IF_GOLD), Color::Base(COLOR_IF_GOLD)), Font::Code::DIN_PRO_COND, "if_gold"};
    templates[Card::Edition::FIFA19][Code::FC_BRONZE] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FC_BRONZE), Color::Base(COLOR_FC_BRONZE)), Font::Code::DIN_PRO_COND, "champion_bronze"};
    templates[Card::Edition::FIFA19][Code::FC_SILVER] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FC_SILVER), Color::Base(COLOR_FC_SILVER)), Font::Code::DIN_PRO_COND, "champion_silver"};
    templates[Card::Edition::FIFA19][Code::FC_GOLD] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FC_GOLD), Color::Base(COLOR_FC_GOLD)), Font::Code::DIN_PRO_COND, "champion_gold"};
    templates[Card::Edition::FIFA19][Code::MOTM] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER)), Font::Code::DIN_PRO_COND, "motm"};
    templates[Card::Edition::FIFA19][Code::PL_POTM] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_PL_POTM), Color::Base(COLOR_PL_POTM)), Font::Code::DIN_PRO_COND, "potm_pl"};
    templates[Card::Edition::FIFA19][Code::BL_POTM] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_BUNDESLIGA_POTM), Color::Base(COLOR_BUNDESLIGA_POTM)), Font::Code::DIN_PRO_COND, "potm_bundesliga"};
    templates[Card::Edition::FIFA19][Code::FUTTIES] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FUTTIES), Color::Base(COLOR_FUTTIES)), Font::Code::DIN_PRO_COND, "futties"};
    templates[Card::Edition::FIFA19][Code::FUTTIESW] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FUTTIES), Color::Base(COLOR_FUTTIES)), Font::Code::DIN_PRO_COND, "futties_winner"};
    templates[Card::Edition::FIFA19][Code::TOTY] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_PORTICA), Color::Base(COLOR_PORTICA)), Font::Code::DIN_PRO_COND, "toty"};
    templates[Card::Edition::FIFA19][Code::TOTY_N] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_PORTICA), Color::Base(COLOR_PORTICA)), Font::Code::DIN_PRO_COND, "toty_nominees"};
    templates[Card::Edition::FIFA19][Code::EL] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_TANGERINE), Color::Base(COLOR_TANGERINE)), Font::Code::DIN_PRO_COND, "europa_league"};
    templates[Card::Edition::FIFA19][Code::EL_MOTM] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_WHITE_SMOKE), Color::Base(COLOR_BLACK)), Font::Code::DIN_PRO_COND, "europa_league_motm"};
    templates[Card::Edition::FIFA19][Code::EL_LIVE] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_TANGERINE), Color::Base(COLOR_TANGERINE)), Font::Code::DIN_PRO_COND, "europa_league_live"};
    templates[Card::Edition::FIFA19][Code::EL_SBC] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_BLACK), Color::Base(COLOR_BLACK)), Font::Code::DIN_PRO_COND, "europa_league_sbc"};
    templates[Card::Edition::FIFA19][Code::EL_TOTT] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_WHITE_SMOKE), Color::Base(COLOR_WHITE_SMOKE)), Font::Code::DIN_PRO_COND, "europa_league_tott"};
    templates[Card::Edition::FIFA19][Code::COMMON_UCL] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER)), Font::Code::CHAMPIONS, "ucl_common"};
    templates[Card::Edition::FIFA19][Code::RARE_UCL] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER)), Font::Code::CHAMPIONS, "ucl_rare"};
    templates[Card::Edition::FIFA19][Code::UCL_MOTM] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER)), Font::Code::CHAMPIONS, "ucl_motm"};
    templates[Card::Edition::FIFA19][Code::UCL_LIVE] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER)), Font::Code::CHAMPIONS, "ucl_live"};
    templates[Card::Edition::FIFA19][Code::UCL_SBC] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER)), Font::Code::CHAMPIONS, "ucl_sbc"};
    templates[Card::Edition::FIFA19][Code::UCL_TOTT] = {Card::Type::UCL, std::make_pair(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER)), Font::Code::CHAMPIONS, "ucl_tott"};
    templates[Card::Edition::FIFA19][Code::FSR] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FUT_SWAP_REWARDS), Color::Base(COLOR_FUT_SWAP_REWARDS)), Font::Code::DIN_PRO_COND, "fut_swap_rewards"};
    templates[Card::Edition::FIFA19][Code::FS] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FUTURE_STARS), Color::Base(COLOR_FUTURE_STARS)), Font::Code::DIN_PRO_COND, "future_stars"};
    templates[Card::Edition::FIFA19][Code::FSN] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FUTURE_STARS), Color::Base(COLOR_FUTURE_STARS)), Font::Code::DIN_PRO_COND, "future_stars_nominees"};
    templates[Card::Edition::FIFA19][Code::PP] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER)), Font::Code::DIN_PRO_COND, "pro_player"};
    templates[Card::Edition::FIFA19][Code::CB] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_BRAZILIAN_YELLOW), Color::Base(COLOR_BRAZILIAN_YELLOW)), Font::Code::DIN_PRO_COND, "carniball"};
    templates[Card::Edition::FIFA19][Code::RB] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_SPRING_BUD), Color::Base(COLOR_SPRING_BUD)), Font::Code::DIN_PRO_COND, "record_breaker"};
    templates[Card::Edition::FIFA19][Code::HERO] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_PHOCA), Color::Base(COLOR_PHOCA)), Font::Code::DIN_PRO_COND, "hero"};
    templates[Card::Edition::FIFA19][Code::AW] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_AWARD_WINNER), Color::Base(COLOR_AWARD_WINNER)), Font::Code::DIN_PRO_COND, "award_winner"};
    templates[Card::Edition::FIFA19][Code::FB] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FLASHBACK), Color::Base(COLOR_FLASHBACK)), Font::Code::DIN_PRO_COND, "flashback"};
    templates[Card::Edition::FIFA19][Code::HEADLINERS] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_WHISPER), Color::Base(COLOR_WHISPER)), Font::Code::DIN_PRO_COND, "headliners"};
    templates[Card::Edition::FIFA19][Code::CC] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_CONCEPT), Color::Base(COLOR_CONCEPT)), Font::Code::DIN_PRO_COND, "concept"};
    templates[Card::Edition::FIFA19][Code::SBC] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_SQUAD_BUILDER), Color::Base(COLOR_SQUAD_BUILDER)), Font::Code::DIN_PRO_COND, "sbc"};
    templates[Card::Edition::FIFA19][Code::SBCP] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_SQUAD_BUILDER_PREMIUM), Color::Base(COLOR_SQUAD_BUILDER_PREMIUM)), Font::Code::DIN_PRO_COND, "sbc_premium"};
    templates[Card::Edition::FIFA19][Code::LEGEND] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_LEGEND), Color::Base(COLOR_LEGEND)), Font::Code::DIN_PRO_COND, "legend"};
    templates[Card::Edition::FIFA19][Code::FS1] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FUT_SWAP_REWARDS), Color::Base(COLOR_FUT_SWAP_REWARDS)), Font::Code::DIN_PRO_COND, "fut_swap_1"};
    templates[Card::Edition::FIFA19][Code::FS2] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FUT_SWAP_REWARDS), Color::Base(COLOR_FUT_SWAP_REWARDS)), Font::Code::DIN_PRO_COND, "fut_swap_2"};
    templates[Card::Edition::FIFA19][Code::FS3] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FUT_SWAP_REWARDS), Color::Base(COLOR_FUT_SWAP_REWARDS)), Font::Code::DIN_PRO_COND, "fut_swap_3"};
    templates[Card::Edition::FIFA19][Code::FS4] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FUT_SWAP_REWARDS), Color::Base(COLOR_FUT_SWAP_REWARDS)), Font::Code::DIN_PRO_COND, "fut_swap_4"};
    templates[Card::Edition::FIFA19][Code::FS5] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FUT_SWAP_REWARDS), Color::Base(COLOR_FUT_SWAP_REWARDS)), Font::Code::DIN_PRO_COND, "fut_swap_5"};
    templates[Card::Edition::FIFA19][Code::FS6] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FUT_SWAP_REWARDS), Color::Base(COLOR_FUT_SWAP_REWARDS)), Font::Code::DIN_PRO_COND, "fut_swap_6"};
    templates[Card::Edition::FIFA19][Code::FS7] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FUT_SWAP_REWARDS), Color::Base(COLOR_FUT_SWAP_REWARDS)), Font::Code::DIN_PRO_COND, "fut_swap_7"};
    templates[Card::Edition::FIFA19][Code::FS8] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FUT_SWAP_REWARDS), Color::Base(COLOR_FUT_SWAP_REWARDS)), Font::Code::DIN_PRO_COND, "fut_swap_8"};
    templates[Card::Edition::FIFA19][Code::FS9] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FUT_SWAP_REWARDS), Color::Base(COLOR_FUT_SWAP_REWARDS)), Font::Code::DIN_PRO_COND, "fut_swap_9"};
    templates[Card::Edition::FIFA19][Code::FS10] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FUT_SWAP_REWARDS), Color::Base(COLOR_FUT_SWAP_REWARDS)), Font::Code::DIN_PRO_COND, "fut_swap_10"};
    templates[Card::Edition::FIFA19][Code::FS11] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FUT_SWAP_REWARDS), Color::Base(COLOR_FUT_SWAP_REWARDS)), Font::Code::DIN_PRO_COND, "fut_swap_11"};
    templates[Card::Edition::FIFA19][Code::OTW] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_FUT_SWAP_REWARDS), Color::Base(COLOR_FUT_SWAP_REWARDS)), Font::Code::DIN_PRO_COND, "otw"};
    templates[Card::Edition::FIFA19][Code::ST_PATRICKS] = {Card::Type::STANDARD, std::make_pair(Color::Base(COLOR_WHISPER), Color::Base(COLOR_ST_PATRICKS)), Font::Code::DIN_PRO_COND, "st_patricks"};

    return templates;
  }
}