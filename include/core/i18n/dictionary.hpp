#ifndef DICTIONARY_HPP
#define DICTIONARY_HPP

#include <string>

namespace Core
{
  namespace I18N
  {
    struct DictionaryStats
    {
      std::string pace;
      std::string passing;
      std::string physical;
      std::string shooting;
      std::string dribbling;
      std::string defending;
    };

    typedef std::map<std::string, std::string> DictionaryPositions;

    struct Dictionary
    {
      DictionaryStats stats;
      DictionaryPositions positions;
    };
  }
}

#endif