#include <string>

class Player
{
public:
  Player(const std::string &name, const std::string &club);

  std::string getName() const;
  std::string getClub() const;

  std::string toString() const;

private:
  std::string name;
  std::string club;
};