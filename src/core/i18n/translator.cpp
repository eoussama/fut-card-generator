#include "core/i18n/translator.hpp"
#include <iostream>
namespace Core
{
  namespace I18N
  {
    Translator::Translator(const Language &language)
    {
      this->language = language;
      this->loadDictionary();
    }

    Language Translator::getLanguage() const { return language; }
    Dictionary Translator::getDictionary() const { return dictionary; }

    void Translator::loadDictionary()
    {
      std::string path = "assets/i18n/" + languageToString(language) + ".json";
      std::ifstream stream(path);

      nlohmann::json data;
      stream >> data;

      this->dictionary.positions = data["positions"];
      this->dictionary.stats.pace = data["stats"]["pac"];
      this->dictionary.stats.passing = data["stats"]["pas"];
      this->dictionary.stats.physical = data["stats"]["phy"];
      this->dictionary.stats.shooting = data["stats"]["sho"];
      this->dictionary.stats.dribbling = data["stats"]["dri"];
      this->dictionary.stats.defending = data["stats"]["def"];
    }
  }
}