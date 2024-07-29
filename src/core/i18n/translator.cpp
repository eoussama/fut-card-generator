#include "core/i18n/translator.hpp"

namespace Core
{
  namespace I18N
  {
    Base::Base(const Language &language)
    {
      this->language = language;
      this->loadDictionary();
    }

    Language Base::getLanguage() const { return language; }
    Dictionary Base::getDictionary() const { return dictionary; }

    void Base::loadDictionary()
    {
      std::string path = "assets/i18n/" + languageToString(language) + ".json";
      nlohmann::json json = nlohmann::json::parse(path);

      this->dictionary.pace = json["pac"];
      this->dictionary.passing = json["pas"];
      this->dictionary.physical = json["phy"];
      this->dictionary.shooting = json["sho"];
      this->dictionary.dribbling = json["dri"];
      this->dictionary.defending = json["def"];
    }
  }
}