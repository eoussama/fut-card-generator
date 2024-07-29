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

      this->dictionary.pace = data["pac"];
      this->dictionary.passing = data["pas"];
      this->dictionary.physical = data["phy"];
      this->dictionary.shooting = data["sho"];
      this->dictionary.dribbling = data["dri"];
      this->dictionary.defending = data["def"];
    }
  }
}