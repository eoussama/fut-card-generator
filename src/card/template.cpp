#include "type.hpp"
#include "template.hpp"

namespace Card
{
  std::string getTemplateNameStr(const TemplateName &templateName)
  {
    switch (templateName)
    {
    case TemplateName::COMMON_BRONZE:
      return "Common Bronze";
    case TemplateName::COMMON_SILVER:
      return "Common Silver";
    case TemplateName::COMMON_GOLD:
      return "Common Gold";
    case TemplateName::RARE_BRONZE:
      return "Rare Bronze";
    case TemplateName::RARE_SILVER:
      return "Rare Silver";
    case TemplateName::RARE_GOLD:
      return "Rare Gold";
    case TemplateName::IF_BRONZE:
      return "IF Bronze";
    case TemplateName::IF_SILVER:
      return "IF Silver";
    case TemplateName::IF_GOLD:
      return "IF Gold";
    case TemplateName::FC_BRONZE:
      return "FC Bronze";
    case TemplateName::FC_SILVER:
      return "FC Silver";
    case TemplateName::FC_GOLD:
      return "FC Gold";
    case TemplateName::MOTM:
      return "MOTM";
    case TemplateName::PL_POTM:
      return "PL POTM";
    case TemplateName::BL_POTM:
      return "BL POTM";
    case TemplateName::FUTTIES:
      return "Futties";
    case TemplateName::FUTTIESW:
      return "Futties W";
    case TemplateName::TOTY:
      return "TOTY";
    case TemplateName::TOTY_N:
      return "TOTY N";
    case TemplateName::EL:
      return "EL";
    case TemplateName::EL_MOTM:
      return "EL MOTM";
    case TemplateName::EL_LIVE:
      return "EL LIVE";
    case TemplateName::EL_SBC:
      return "EL SBC";
    case TemplateName::EL_TOTT:
      return "EL TOTT";
    case TemplateName::COMMON_UCL:
      return "Common UCL";
    case TemplateName::RARE_UCL:
      return "Rare UCL";
    case TemplateName::UCL_MOTM:
      return "UCL MOTM";
    case TemplateName::UCL_LIVE:
      return "UCL LIVE";
    case TemplateName::UCL_SBC:
      return "UCL SBC";
    case TemplateName::UCL_TOTT:
      return "UCL TOTT";
    case TemplateName::FSR:
      return "FSR";
    case TemplateName::FS:
      return "FS";
    case TemplateName::FSN:
      return "FSN";
    case TemplateName::PP:
      return "PP";
    case TemplateName::CB:
      return "CB";
    case TemplateName::RB:
      return "RB";
    case TemplateName::HERO:
      return "HERO";
    case TemplateName::AW:
      return "AW";
    case TemplateName::FB:
      return "FB";
    case TemplateName::HEADLINERS:
      return "Headliners";
    case TemplateName::CC:
      return "CC";
    case TemplateName::SBC:
      return "SBC";
    case TemplateName::SBCP:
      return "SBCP";
    case TemplateName::LEGEND:
      return "Legend";
    default:
      return "Unknown";
    }
  }

  Templates initTemplates()
  {
    Templates templates;

    templates[TemplateName::COMMON_BRONZE] = {Type::STANDARD, "common_bronze"};
    templates[TemplateName::COMMON_SILVER] = {Type::STANDARD, "common_silver"};
    templates[TemplateName::COMMON_GOLD] = {Type::STANDARD, "common_gold"};
    templates[TemplateName::RARE_BRONZE] = {Type::STANDARD, "rare_bronze"};
    templates[TemplateName::RARE_SILVER] = {Type::STANDARD, "rare_silver"};
    templates[TemplateName::RARE_GOLD] = {Type::STANDARD, "rare_gold"};
    templates[TemplateName::IF_BRONZE] = {Type::STANDARD, "if_bronze"};
    templates[TemplateName::IF_SILVER] = {Type::STANDARD, "if_silver"};
    templates[TemplateName::IF_GOLD] = {Type::STANDARD, "if_gold"};
    templates[TemplateName::FC_BRONZE] = {Type::STANDARD, "champion_bronze"};
    templates[TemplateName::FC_SILVER] = {Type::STANDARD, "champion_silver"};
    templates[TemplateName::FC_GOLD] = {Type::STANDARD, "champion_gold"};
    templates[TemplateName::MOTM] = {Type::STANDARD, "motm"};
    templates[TemplateName::PL_POTM] = {Type::STANDARD, "potm_pl"};
    templates[TemplateName::BL_POTM] = {Type::STANDARD, "potm_bundesliga"};
    templates[TemplateName::FUTTIES] = {Type::STANDARD, "futties"};
    templates[TemplateName::FUTTIESW] = {Type::STANDARD, "futties_winner"};
    templates[TemplateName::TOTY] = {Type::STANDARD, "toty"};
    templates[TemplateName::TOTY_N] = {Type::STANDARD, "toty_nominees"};
    templates[TemplateName::EL] = {Type::STANDARD, "europa_league"};
    templates[TemplateName::EL_MOTM] = {Type::STANDARD, "europa_league_motm"};
    templates[TemplateName::EL_LIVE] = {Type::STANDARD, "europa_league_live"};
    templates[TemplateName::EL_SBC] = {Type::STANDARD, "europa_league_sbc"};
    templates[TemplateName::EL_TOTT] = {Type::STANDARD, "europa_league_tott"};
    templates[TemplateName::COMMON_UCL] = {Type::UCL, "ucl_common"};
    templates[TemplateName::RARE_UCL] = {Type::UCL, "ucl_rare"};
    templates[TemplateName::UCL_MOTM] = {Type::UCL, "ucl_motm"};
    templates[TemplateName::UCL_LIVE] = {Type::UCL, "ucl_live"};
    templates[TemplateName::UCL_SBC] = {Type::UCL, "ucl_sbc"};
    templates[TemplateName::UCL_TOTT] = {Type::UCL, "ucl_tott"};
    templates[TemplateName::FSR] = {Type::UCL, "fut_swap_rewards"};
    templates[TemplateName::FS] = {Type::UCL, "future_stars"};
    templates[TemplateName::FSN] = {Type::UCL, "future_stars_nominees"};
    templates[TemplateName::PP] = {Type::UCL, "pro_player"};
    templates[TemplateName::CB] = {Type::UCL, "carniball"};
    templates[TemplateName::RB] = {Type::UCL, "record_breaker"};
    templates[TemplateName::HERO] = {Type::UCL, "hero"};
    templates[TemplateName::AW] = {Type::UCL, "award_winner"};
    templates[TemplateName::FB] = {Type::UCL, "flashback"};
    templates[TemplateName::HEADLINERS] = {Type::UCL, "headliners"};
    templates[TemplateName::CC] = {Type::UCL, "concept"};
    templates[TemplateName::SBC] = {Type::UCL, "sbc"};
    templates[TemplateName::SBCP] = {Type::UCL, "sbc_premium"};
    templates[TemplateName::LEGEND] = {Type::UCL, "legend"};

    return templates;
  }
}