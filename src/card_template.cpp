#include "card_type.h"
#include "card_template.h"

std::string getTemplateNameStr(const CardTemplateName &templateName)
{
  switch (templateName)
  {
  case CardTemplateName::COMMON_BRONZE:
    return "Common Bronze";
  case CardTemplateName::COMMON_SILVER:
    return "Common Silver";
  case CardTemplateName::COMMON_GOLD:
    return "Common Gold";
  case CardTemplateName::RARE_BRONZE:
    return "Rare Bronze";
  case CardTemplateName::RARE_SILVER:
    return "Rare Silver";
  case CardTemplateName::RARE_GOLD:
    return "Rare Gold";
  case CardTemplateName::IF_BRONZE:
    return "IF Bronze";
  case CardTemplateName::IF_SILVER:
    return "IF Silver";
  case CardTemplateName::IF_GOLD:
    return "IF Gold";
  case CardTemplateName::FC_BRONZE:
    return "FC Bronze";
  case CardTemplateName::FC_SILVER:
    return "FC Silver";
  case CardTemplateName::FC_GOLD:
    return "FC Gold";
  case CardTemplateName::MOTM:
    return "MOTM";
  case CardTemplateName::PL_POTM:
    return "PL POTM";
  case CardTemplateName::BL_POTM:
    return "BL POTM";
  case CardTemplateName::FUTTIES:
    return "Futties";
  case CardTemplateName::FUTTIESW:
    return "Futties W";
  case CardTemplateName::TOTY:
    return "TOTY";
  case CardTemplateName::TOTY_N:
    return "TOTY N";
  case CardTemplateName::EL:
    return "EL";
  case CardTemplateName::EL_MOTM:
    return "EL MOTM";
  case CardTemplateName::EL_LIVE:
    return "EL LIVE";
  case CardTemplateName::EL_SBC:
    return "EL SBC";
  case CardTemplateName::EL_TOTT:
    return "EL TOTT";
  case CardTemplateName::COMMON_UCL:
    return "Common UCL";
  case CardTemplateName::RARE_UCL:
    return "Rare UCL";
  case CardTemplateName::UCL_MOTM:
    return "UCL MOTM";
  case CardTemplateName::UCL_LIVE:
    return "UCL LIVE";
  case CardTemplateName::UCL_SBC:
    return "UCL SBC";
  case CardTemplateName::UCL_TOTT:
    return "UCL TOTT";
  case CardTemplateName::FSR:
    return "FSR";
  case CardTemplateName::FS:
    return "FS";
  case CardTemplateName::FSN:
    return "FSN";
  case CardTemplateName::PP:
    return "PP";
  case CardTemplateName::CB:
    return "CB";
  case CardTemplateName::RB:
    return "RB";
  case CardTemplateName::HERO:
    return "HERO";
  case CardTemplateName::AW:
    return "AW";
  case CardTemplateName::FB:
    return "FB";
  case CardTemplateName::HEADLINERS:
    return "Headliners";
  case CardTemplateName::CC:
    return "CC";
  case CardTemplateName::SBC:
    return "SBC";
  case CardTemplateName::SBCP:
    return "SBCP";
  case CardTemplateName::LEGEND:
    return "Legend";
  default:
    return "Unknown";
  }
}

CardTemplates initCardTemplates()
{
  CardTemplates templates;

  templates[CardTemplateName::COMMON_BRONZE] = {CardType::STANDARD, "common_bronze"};
  templates[CardTemplateName::COMMON_SILVER] = {CardType::STANDARD, "common_silver"};
  templates[CardTemplateName::COMMON_GOLD] = {CardType::STANDARD, "common_gold"};
  templates[CardTemplateName::RARE_BRONZE] = {CardType::STANDARD, "rare_bronze"};
  templates[CardTemplateName::RARE_SILVER] = {CardType::STANDARD, "rare_silver"};
  templates[CardTemplateName::RARE_GOLD] = {CardType::STANDARD, "rare_gold"};
  templates[CardTemplateName::IF_BRONZE] = {CardType::STANDARD, "if_bronze"};
  templates[CardTemplateName::IF_SILVER] = {CardType::STANDARD, "if_silver"};
  templates[CardTemplateName::IF_GOLD] = {CardType::STANDARD, "if_gold"};
  templates[CardTemplateName::FC_BRONZE] = {CardType::STANDARD, "champion_bronze"};
  templates[CardTemplateName::FC_SILVER] = {CardType::STANDARD, "champion_silver"};
  templates[CardTemplateName::FC_GOLD] = {CardType::STANDARD, "champion_gold"};
  templates[CardTemplateName::MOTM] = {CardType::STANDARD, "motm"};
  templates[CardTemplateName::PL_POTM] = {CardType::STANDARD, "potm_pl"};
  templates[CardTemplateName::BL_POTM] = {CardType::STANDARD, "potm_bundesliga"};
  templates[CardTemplateName::FUTTIES] = {CardType::STANDARD, "futties"};
  templates[CardTemplateName::FUTTIESW] = {CardType::STANDARD, "futties_winner"};
  templates[CardTemplateName::TOTY] = {CardType::STANDARD, "toty"};
  templates[CardTemplateName::TOTY_N] = {CardType::STANDARD, "toty_nominees"};
  templates[CardTemplateName::EL] = {CardType::STANDARD, "europa_league"};
  templates[CardTemplateName::EL_MOTM] = {CardType::STANDARD, "europa_league_motm"};
  templates[CardTemplateName::EL_LIVE] = {CardType::STANDARD, "europa_league_live"};
  templates[CardTemplateName::EL_SBC] = {CardType::STANDARD, "europa_league_sbc"};
  templates[CardTemplateName::EL_TOTT] = {CardType::STANDARD, "europa_league_tott"};
  templates[CardTemplateName::COMMON_UCL] = {CardType::UCL, "ucl_common"};
  templates[CardTemplateName::RARE_UCL] = {CardType::UCL, "ucl_rare"};
  templates[CardTemplateName::UCL_MOTM] = {CardType::UCL, "ucl_motm"};
  templates[CardTemplateName::UCL_LIVE] = {CardType::UCL, "ucl_live"};
  templates[CardTemplateName::UCL_SBC] = {CardType::UCL, "ucl_sbc"};
  templates[CardTemplateName::UCL_TOTT] = {CardType::UCL, "ucl_tott"};
  templates[CardTemplateName::FSR] = {CardType::UCL, "fut_swap_rewards"};
  templates[CardTemplateName::FS] = {CardType::UCL, "future_stars"};
  templates[CardTemplateName::FSN] = {CardType::UCL, "future_stars_nominees"};
  templates[CardTemplateName::PP] = {CardType::UCL, "pro_player"};
  templates[CardTemplateName::CB] = {CardType::UCL, "carniball"};
  templates[CardTemplateName::RB] = {CardType::UCL, "record_breaker"};
  templates[CardTemplateName::HERO] = {CardType::UCL, "hero"};
  templates[CardTemplateName::AW] = {CardType::UCL, "award_winner"};
  templates[CardTemplateName::FB] = {CardType::UCL, "flashback"};
  templates[CardTemplateName::HEADLINERS] = {CardType::UCL, "headliners"};
  templates[CardTemplateName::CC] = {CardType::UCL, "concept"};
  templates[CardTemplateName::SBC] = {CardType::UCL, "sbc"};
  templates[CardTemplateName::SBCP] = {CardType::UCL, "sbc_premium"};
  templates[CardTemplateName::LEGEND] = {CardType::UCL, "legend"};

  return templates;
}