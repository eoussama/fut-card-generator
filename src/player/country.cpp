#include "country.hpp"

namespace Player
{
  std::string countryToString(const Country &country)
  {
    switch (country)
    {
    case Country::AD:
      return "ad";
    case Country::AE:
      return "ae";
    case Country::AF:
      return "af";
    case Country::AG:
      return "ag";
    case Country::AI:
      return "ai";
    case Country::AL:
      return "al";
    case Country::AM:
      return "am";
    case Country::AN:
      return "an";
    case Country::AO:
      return "ao";
    case Country::AQ:
      return "aq";
    case Country::AR:
      return "ar";
    case Country::AS:
      return "as";
    case Country::AT:
      return "at";
    case Country::AU:
      return "au";
    case Country::AW:
      return "aw";
    case Country::AX:
      return "ax";
    case Country::AZ:
      return "az";
    case Country::BA:
      return "ba";
    case Country::BB:
      return "bb";
    case Country::BD:
      return "bd";
    case Country::BE:
      return "be";
    case Country::BF:
      return "bf";
    case Country::BG:
      return "bg";
    case Country::BH:
      return "bh";
    case Country::BI:
      return "bi";
    case Country::BJ:
      return "bj";
    case Country::BL:
      return "bl";
    case Country::BM:
      return "bm";
    case Country::BN:
      return "bn";
    case Country::BO:
      return "bo";
    case Country::BQ:
      return "bq";
    case Country::BR:
      return "br";
    case Country::BS:
      return "bs";
    case Country::BT:
      return "bt";
    case Country::BV:
      return "bv";
    case Country::BW:
      return "bw";
    case Country::BY:
      return "by";
    case Country::BZ:
      return "bz";
    case Country::CA:
      return "ca";
    case Country::CC:
      return "cc";
    case Country::CD:
      return "cd";
    case Country::CF:
      return "cf";
    case Country::CG:
      return "cg";
    case Country::CH:
      return "ch";
    case Country::CI:
      return "ci";
    case Country::CK:
      return "ck";
    case Country::CL:
      return "cl";
    case Country::CM:
      return "cm";
    case Country::CN:
      return "cn";
    case Country::CO:
      return "co";
    case Country::CR:
      return "cr";
    case Country::CU:
      return "cu";
    case Country::CV:
      return "cv";
    case Country::CW:
      return "cw";
    case Country::CX:
      return "cx";
    case Country::CY:
      return "cy";
    case Country::CZ:
      return "cz";
    case Country::DE:
      return "de";
    case Country::DJ:
      return "dj";
    case Country::DK:
      return "dk";
    case Country::DM:
      return "dm";
    case Country::DO:
      return "do";
    case Country::DZ:
      return "dz";
    case Country::EC:
      return "ec";
    case Country::EE:
      return "ee";
    case Country::EG:
      return "eg";
    case Country::EH:
      return "eh";
    case Country::ER:
      return "er";
    case Country::ES:
      return "es";
    case Country::ET:
      return "et";
    case Country::EU:
      return "eu";
    case Country::FI:
      return "fi";
    case Country::FJ:
      return "fj";
    case Country::FK:
      return "fk";
    case Country::FM:
      return "fm";
    case Country::FO:
      return "fo";
    case Country::FR:
      return "fr";
    case Country::GA:
      return "ga";
    case Country::GBNG:
      return "gb-eng";
    case Country::GBIR:
      return "gb-nir";
    case Country::GBCT:
      return "gb-sct";
    case Country::GBLS:
      return "gb-wls";
    case Country::GB:
      return "gb";
    case Country::GD:
      return "gd";
    case Country::GE:
      return "ge";
    case Country::GF:
      return "gf";
    case Country::GG:
      return "gg";
    case Country::GH:
      return "gh";
    case Country::GI:
      return "gi";
    case Country::GL:
      return "gl";
    case Country::GM:
      return "gm";
    case Country::GN:
      return "gn";
    case Country::GP:
      return "gp";
    case Country::GQ:
      return "gq";
    case Country::GR:
      return "gr";
    case Country::GS:
      return "gs";
    case Country::GT:
      return "gt";
    case Country::GU:
      return "gu";
    case Country::GW:
      return "gw";
    case Country::GY:
      return "gy";
    case Country::HK:
      return "hk";
    case Country::HM:
      return "hm";
    case Country::HN:
      return "hn";
    case Country::HR:
      return "hr";
    case Country::HT:
      return "ht";
    case Country::HU:
      return "hu";
    case Country::ID:
      return "id";
    case Country::IE:
      return "ie";
    case Country::IL:
      return "il";
    case Country::IM:
      return "im";
    case Country::IN:
      return "in";
    case Country::IO:
      return "io";
    case Country::IQ:
      return "iq";
    case Country::IR:
      return "ir";
    case Country::IS:
      return "is";
    case Country::IT:
      return "it";
    case Country::JE:
      return "je";
    case Country::JM:
      return "jm";
    case Country::JO:
      return "jo";
    case Country::JP:
      return "jp";
    case Country::KE:
      return "ke";
    case Country::KG:
      return "kg";
    case Country::KH:
      return "kh";
    case Country::KI:
      return "ki";
    case Country::KM:
      return "km";
    case Country::KN:
      return "kn";
    case Country::KP:
      return "kp";
    case Country::KR:
      return "kr";
    case Country::KW:
      return "kw";
    case Country::KY:
      return "ky";
    case Country::KZ:
      return "kz";
    case Country::LA:
      return "la";
    case Country::LB:
      return "lb";
    case Country::LC:
      return "lc";
    case Country::LI:
      return "li";
    case Country::LK:
      return "lk";
    case Country::LR:
      return "lr";
    case Country::LS:
      return "ls";
    case Country::LT:
      return "lt";
    case Country::LU:
      return "lu";
    case Country::LV:
      return "lv";
    case Country::LY:
      return "ly";
    case Country::MA:
      return "ma";
    case Country::MC:
      return "mc";
    case Country::MD:
      return "md";
    case Country::ME:
      return "me";
    case Country::MF:
      return "mf";
    case Country::MG:
      return "mg";
    case Country::MH:
      return "mh";
    case Country::MK:
      return "mk";
    case Country::ML:
      return "ml";
    case Country::MM:
      return "mm";
    case Country::MN:
      return "mn";
    case Country::MO:
      return "mo";
    case Country::MP:
      return "mp";
    case Country::MQ:
      return "mq";
    case Country::MR:
      return "mr";
    case Country::MS:
      return "ms";
    case Country::MT:
      return "mt";
    case Country::MU:
      return "mu";
    case Country::MV:
      return "mv";
    case Country::MW:
      return "mw";
    case Country::MX:
      return "mx";
    case Country::MY:
      return "my";
    case Country::MZ:
      return "mz";
    case Country::NA:
      return "na";
    case Country::NC:
      return "nc";
    case Country::NE:
      return "ne";
    case Country::NF:
      return "nf";
    case Country::NG:
      return "ng";
    case Country::NI:
      return "ni";
    case Country::NL:
      return "nl";
    case Country::NO:
      return "no";
    case Country::NP:
      return "np";
    case Country::NR:
      return "nr";
    case Country::NU:
      return "nu";
    case Country::NZ:
      return "nz";
    case Country::OM:
      return "om";
    case Country::PA:
      return "pa";
    case Country::PE:
      return "pe";
    case Country::PF:
      return "pf";
    case Country::PG:
      return "pg";
    case Country::PH:
      return "ph";
    case Country::PK:
      return "pk";
    case Country::PL:
      return "pl";
    case Country::PM:
      return "pm";
    case Country::PN:
      return "pn";
    case Country::PR:
      return "pr";
    case Country::PS:
      return "ps";
    case Country::PT:
      return "pt";
    case Country::PW:
      return "pw";
    case Country::PY:
      return "py";
    case Country::QA:
      return "qa";
    case Country::RE:
      return "re";
    case Country::RO:
      return "ro";
    case Country::RS:
      return "rs";
    case Country::RU:
      return "ru";
    case Country::RW:
      return "rw";
    case Country::SA:
      return "sa";
    case Country::SB:
      return "sb";
    case Country::SC:
      return "sc";
    case Country::SD:
      return "sd";
    case Country::SE:
      return "se";
    case Country::SG:
      return "sg";
    case Country::SH:
      return "sh";
    case Country::SI:
      return "si";
    case Country::SJ:
      return "sj";
    case Country::SK:
      return "sk";
    case Country::SL:
      return "sl";
    case Country::SM:
      return "sm";
    case Country::SN:
      return "sn";
    case Country::SO:
      return "so";
    case Country::SR:
      return "sr";
    case Country::SS:
      return "ss";
    case Country::ST:
      return "st";
    case Country::SV:
      return "sv";
    case Country::SX:
      return "sx";
    case Country::SY:
      return "sy";
    case Country::SZ:
      return "sz";
    case Country::TC:
      return "tc";
    case Country::TD:
      return "td";
    case Country::TF:
      return "tf";
    case Country::TG:
      return "tg";
    case Country::TH:
      return "th";
    case Country::TJ:
      return "tj";
    case Country::TK:
      return "tk";
    case Country::TL:
      return "tl";
    case Country::TM:
      return "tm";
    case Country::TN:
      return "tn";
    case Country::TO:
      return "to";
    case Country::TR:
      return "tr";
    case Country::TT:
      return "tt";
    case Country::TV:
      return "tv";
    case Country::TW:
      return "tw";
    case Country::TZ:
      return "tz";
    case Country::UA:
      return "ua";
    case Country::UG:
      return "ug";
    case Country::UM:
      return "um";
    case Country::US:
      return "us";
    case Country::UY:
      return "uy";
    case Country::UZ:
      return "uz";
    case Country::VA:
      return "va";
    case Country::VC:
      return "vc";
    case Country::VE:
      return "ve";
    case Country::VG:
      return "vg";
    case Country::VI:
      return "vi";
    case Country::VN:
      return "vn";
    case Country::VU:
      return "vu";
    case Country::WF:
      return "wf";
    case Country::XK:
      return "xk";
    case Country::WS:
      return "ws";
    case Country::YE:
      return "ye";
    case Country::YT:
      return "yt";
    case Country::ZA:
      return "za";
    case Country::ZM:
      return "zm";
    case Country::ZW:
      return "zw";
    default:
      return "Unknown";
    }
  }

  Country stringToCountry(const std::string &country)
  {
    if (country == "ad")
      return Country::AD;
    else if (country == "ae")
      return Country::AE;
    else if (country == "af")
      return Country::AF;
    else if (country == "ag")
      return Country::AG;
    else if (country == "ai")
      return Country::AI;
    else if (country == "al")
      return Country::AL;
    else if (country == "am")
      return Country::AM;
    else if (country == "an")
      return Country::AN;
    else if (country == "ao")
      return Country::AO;
    else if (country == "aq")
      return Country::AQ;
    else if (country == "ar")
      return Country::AR;
    else if (country == "as")
      return Country::AS;
    else if (country == "at")
      return Country::AT;
    else if (country == "au")
      return Country::AU;
    else if (country == "aw")
      return Country::AW;
    else if (country == "ax")
      return Country::AX;
    else if (country == "az")
      return Country::AZ;
    else if (country == "ba")
      return Country::BA;
    else if (country == "bb")
      return Country::BB;
    else if (country == "bd")
      return Country::BD;
    else if (country == "be")
      return Country::BE;
    else if (country == "bf")
      return Country::BF;
    else if (country == "bg")
      return Country::BG;
    else if (country == "bh")
      return Country::BH;
    else if (country == "bi")
      return Country::BI;
    else if (country == "bj")
      return Country::BJ;
    else if (country == "bl")
      return Country::BL;
    else if (country == "bm")
      return Country::BM;
    else if (country == "bn")
      return Country::BN;
    else if (country == "bo")
      return Country::BO;
    else if (country == "bq")
      return Country::BQ;
    else if (country == "br")
      return Country::BR;
    else if (country == "bs")
      return Country::BS;
    else if (country == "bt")
      return Country::BT;
    else if (country == "bv")
      return Country::BV;
    else if (country == "bw")
      return Country::BW;
    else if (country == "by")
      return Country::BY;
    else if (country == "bz")
      return Country::BZ;
    else if (country == "ca")
      return Country::CA;
    else if (country == "cc")
      return Country::CC;
    else if (country == "cd")
      return Country::CD;
    else if (country == "cf")
      return Country::CF;
    else if (country == "cg")
      return Country::CG;
    else if (country == "ch")
      return Country::CH;
    else if (country == "ci")
      return Country::CI;
    else if (country == "ck")
      return Country::CK;
    else if (country == "cl")
      return Country::CL;
    else if (country == "cm")
      return Country::CM;
    else if (country == "cn")
      return Country::CN;
    else if (country == "co")
      return Country::CO;
    else if (country == "cr")
      return Country::CR;
    else if (country == "cu")
      return Country::CU;
    else if (country == "cv")
      return Country::CV;
    else if (country == "cw")
      return Country::CW;
    else if (country == "cx")
      return Country::CX;
    else if (country == "cy")
      return Country::CY;
    else if (country == "cz")
      return Country::CZ;
    else if (country == "de")
      return Country::DE;
    else if (country == "dj")
      return Country::DJ;
    else if (country == "dk")
      return Country::DK;
    else if (country == "dm")
      return Country::DM;
    else if (country == "do")
      return Country::DO;
    else if (country == "dz")
      return Country::DZ;
    else if (country == "ec")
      return Country::EC;
    else if (country == "ee")
      return Country::EE;
    else if (country == "eg")
      return Country::EG;
    else if (country == "eh")
      return Country::EH;
    else if (country == "er")
      return Country::ER;
    else if (country == "es")
      return Country::ES;
    else if (country == "et")
      return Country::ET;
    else if (country == "eu")
      return Country::EU;
    else if (country == "fi")
      return Country::FI;
    else if (country == "fj")
      return Country::FJ;
    else if (country == "fk")
      return Country::FK;
    else if (country == "fm")
      return Country::FM;
    else if (country == "fo")
      return Country::FO;
    else if (country == "fr")
      return Country::FR;
    else if (country == "ga")
      return Country::GA;
    else if (country == "gb-eng")
      return Country::GBNG;
    else if (country == "gb-nir")
      return Country::GBIR;
    else if (country == "gb-sct")
      return Country::GBCT;
    else if (country == "gb-wls")
      return Country::GBLS;
    else if (country == "gb")
      return Country::GB;
    else if (country == "gd")
      return Country::GD;
    else if (country == "ge")
      return Country::GE;
    else if (country == "gf")
      return Country::GF;
    else if (country == "gg")
      return Country::GG;
    else if (country == "gh")
      return Country::GH;
    else if (country == "gi")
      return Country::GI;
    else if (country == "gl")
      return Country::GL;
    else if (country == "gm")
      return Country::GM;
    else if (country == "gn")
      return Country::GN;
    else if (country == "gp")
      return Country::GP;
    else if (country == "gq")
      return Country::GQ;
    else if (country == "gr")
      return Country::GR;
    else if (country == "gs")
      return Country::GS;
    else if (country == "gt")
      return Country::GT;
    else if (country == "gu")
      return Country::GU;
    else if (country == "gw")
      return Country::GW;
    else if (country == "gy")
      return Country::GY;
    else if (country == "hk")
      return Country::HK;
    else if (country == "hm")
      return Country::HM;
    else if (country == "hn")
      return Country::HN;
    else if (country == "hr")
      return Country::HR;
    else if (country == "ht")
      return Country::HT;
    else if (country == "hu")
      return Country::HU;
    else if (country == "id")
      return Country::ID;
    else if (country == "ie")
      return Country::IE;
    else if (country == "il")
      return Country::IL;
    else if (country == "im")
      return Country::IM;
    else if (country == "in")
      return Country::IN;
    else if (country == "io")
      return Country::IO;
    else if (country == "iq")
      return Country::IQ;
    else if (country == "ir")
      return Country::IR;
    else if (country == "is")
      return Country::IS;
    else if (country == "it")
      return Country::IT;
    else if (country == "je")
      return Country::JE;
    else if (country == "jm")
      return Country::JM;
    else if (country == "jo")
      return Country::JO;
    else if (country == "jp")
      return Country::JP;
    else if (country == "ke")
      return Country::KE;
    else if (country == "kg")
      return Country::KG;
    else if (country == "kh")
      return Country::KH;
    else if (country == "ki")
      return Country::KI;
    else if (country == "km")
      return Country::KM;
    else if (country == "kn")
      return Country::KN;
    else if (country == "kp")
      return Country::KP;
    else if (country == "kr")
      return Country::KR;
    else if (country == "kw")
      return Country::KW;
    else if (country == "ky")
      return Country::KY;
    else if (country == "kz")
      return Country::KZ;
    else if (country == "la")
      return Country::LA;
    else if (country == "lb")
      return Country::LB;
    else if (country == "lc")
      return Country::LC;
    else if (country == "li")
      return Country::LI;
    else if (country == "lk")
      return Country::LK;
    else if (country == "lr")
      return Country::LR;
    else if (country == "ls")
      return Country::LS;
    else if (country == "lt")
      return Country::LT;
    else if (country == "lu")
      return Country::LU;
    else if (country == "lv")
      return Country::LV;
    else if (country == "ly")
      return Country::LY;
    else if (country == "ma")
      return Country::MA;
    else if (country == "mc")
      return Country::MC;
    else if (country == "md")
      return Country::MD;
    else if (country == "me")
      return Country::ME;
    else if (country == "mf")
      return Country::MF;
    else if (country == "mg")
      return Country::MG;
    else if (country == "mh")
      return Country::MH;
    else if (country == "mk")
      return Country::MK;
    else if (country == "ml")
      return Country::ML;
    else if (country == "mm")
      return Country::MM;
    else if (country == "mn")
      return Country::MN;
    else if (country == "mo")
      return Country::MO;
    else if (country == "mp")
      return Country::MP;
    else if (country == "mq")
      return Country::MQ;
    else if (country == "mr")
      return Country::MR;
    else if (country == "ms")
      return Country::MS;
    else if (country == "mt")
      return Country::MT;
    else if (country == "mu")
      return Country::MU;
    else if (country == "mv")
      return Country::MV;
    else if (country == "mw")
      return Country::MW;
    else if (country == "mx")
      return Country::MX;
    else if (country == "my")
      return Country::MY;
    else if (country == "mz")
      return Country::MZ;
    else if (country == "na")
      return Country::NA;
    else if (country == "nc")
      return Country::NC;
    else if (country == "ne")
      return Country::NE;
    else if (country == "nf")
      return Country::NF;
    else if (country == "ng")
      return Country::NG;
    else if (country == "ni")
      return Country::NI;
    else if (country == "nl")
      return Country::NL;
    else if (country == "no")
      return Country::NO;
    else if (country == "np")
      return Country::NP;
    else if (country == "nr")
      return Country::NR;
    else if (country == "nu")
      return Country::NU;
    else if (country == "nz")
      return Country::NZ;
    else if (country == "om")
      return Country::OM;
    else if (country == "pa")
      return Country::PA;
    else if (country == "pe")
      return Country::PE;
    else if (country == "pf")
      return Country::PF;
    else if (country == "pg")
      return Country::PG;
    else if (country == "ph")
      return Country::PH;
    else if (country == "pk")
      return Country::PK;
    else if (country == "pl")
      return Country::PL;
    else if (country == "pm")
      return Country::PM;
    else if (country == "pn")
      return Country::PN;
    else if (country == "pr")
      return Country::PR;
    else if (country == "ps")
      return Country::PS;
    else if (country == "pt")
      return Country::PT;
    else if (country == "pw")
      return Country::PW;
    else if (country == "py")
      return Country::PY;
    else if (country == "qa")
      return Country::QA;
    else if (country == "re")
      return Country::RE;
    else if (country == "ro")
      return Country::RO;
    else if (country == "rs")
      return Country::RS;
    else if (country == "ru")
      return Country::RU;
    else if (country == "rw")
      return Country::RW;
    else if (country == "sa")
      return Country::SA;
    else if (country == "sb")
      return Country::SB;
    else if (country == "sc")
      return Country::SC;
    else if (country == "sd")
      return Country::SD;
    else if (country == "se")
      return Country::SE;
    else if (country == "sg")
      return Country::SG;
    else if (country == "sh")
      return Country::SH;
    else if (country == "si")
      return Country::SI;
    else if (country == "sj")
      return Country::SJ;
    else if (country == "sk")
      return Country::SK;
    else if (country == "sl")
      return Country::SL;
    else if (country == "sm")
      return Country::SM;
    else if (country == "sn")
      return Country::SN;
    else if (country == "so")
      return Country::SO;
    else if (country == "sr")
      return Country::SR;
    else if (country == "ss")
      return Country::SS;
    else if (country == "st")
      return Country::ST;
    else if (country == "sv")
      return Country::SV;
    else if (country == "sx")
      return Country::SX;
    else if (country == "sy")
      return Country::SY;
    else if (country == "sz")
      return Country::SZ;
    else if (country == "tc")
      return Country::TC;
    else if (country == "td")
      return Country::TD;
    else if (country == "tf")
      return Country::TF;
    else if (country == "tg")
      return Country::TG;
    else if (country == "th")
      return Country::TH;
    else if (country == "tj")
      return Country::TJ;
    else if (country == "tk")
      return Country::TK;
    else if (country == "tl")
      return Country::TL;
    else if (country == "tm")
      return Country::TM;
    else if (country == "tn")
      return Country::TN;
    else if (country == "to")
      return Country::TO;
    else if (country == "tr")
      return Country::TR;
    else if (country == "tt")
      return Country::TT;
    else if (country == "tv")
      return Country::TV;
    else if (country == "tw")
      return Country::TW;
    else if (country == "tz")
      return Country::TZ;
    else if (country == "ua")
      return Country::UA;
    else if (country == "ug")
      return Country::UG;
    else if (country == "um")
      return Country::UM;
    else if (country == "us")
      return Country::US;
    else if (country == "uy")
      return Country::UY;
    else if (country == "uz")
      return Country::UZ;
    else if (country == "va")
      return Country::VA;
    else if (country == "vc")
      return Country::VC;
    else if (country == "ve")
      return Country::VE;
    else if (country == "vg")
      return Country::VG;
    else if (country == "vi")
      return Country::VI;
    else if (country == "vn")
      return Country::VN;
    else if (country == "vu")
      return Country::VU;
    else if (country == "wf")
      return Country::WF;
    else if (country == "xk")
      return Country::XK;
    else if (country == "ws")
      return Country::WS;
    else if (country == "ye")
      return Country::YE;
    else if (country == "yt")
      return Country::YT;
    else if (country == "za")
      return Country::ZA;
    else if (country == "zm")
      return Country::ZM;
    else if (country == "zw")
      return Country::ZW;
    else
      return Country::UNKNOWN;
  }
}