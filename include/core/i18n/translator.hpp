#ifndef I18N_HPP
#define I18N_HPP

#include <nlohmann/json.hpp>

#include "language.hpp"
#include "dictionary.hpp"

namespace Core
{
  namespace I18N
  {
    class Base
    {
    public:
      Base(const Language &language);

      Language getLanguage() const;
      Dictionary getDictionary() const;

    private:
      Language language;
      Dictionary dictionary;

      void loadDictionary();
    };
  }
}

#endif