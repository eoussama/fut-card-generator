#ifndef CARDTYPE_H
#define CARDTYPE_H

#include <map>
#include <string>

#include "type.hpp"
#include "edition.hpp"
#include "template_name.hpp"

namespace Card
{
  namespace Template
  {
    struct Base
    {
      Type type;
      std::string background;
    };

    typedef std::map<Code, Base> Templates;

    Templates init();
  }
}

#endif