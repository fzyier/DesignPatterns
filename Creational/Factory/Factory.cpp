#include "Factory.hpp"

// ! Warior : ICharacter
void Warior::attack() const
{
  std::cout << "WARIOR" << " ATTACK!" << '\n';
}
void Warior::defend() const
{
  std::cout << "WARIOR" << " DEFEND!" << '\n';
}
// ! Mage : ICharacter
void Mage::attack() const
{
  std::cout << "MAGE" << " ATTACK!" << '\n';
}
void Mage::defend() const
{
  std::cout << "MAGE" << " DEFEND!" << '\n';
}
// ! Archer : ICharacter
void Archer::attack() const
{
  std::cout << "ARCHER" << " ATTACK!" << '\n';
}
void Archer::defend() const
{
  std::cout << "ARCHER" << " DEFEND!" << '\n';
}
// ! CharacterFactory
const void CharacterFactory::CharacterDo()
{
    ICharacter* character{this->CharacterGetter()};

    character->attack();
    character->defend();

  delete character;
}