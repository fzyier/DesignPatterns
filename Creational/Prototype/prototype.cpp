#include "prototype.hpp"

// ! Tank
void Tank::show() const
{
    std::cout << name_ << " : " << damage_ << '\n';
}
// ! TankPrototypeOne
Tank* TankPrototypeOne::clone() const
{
    return new TankPrototypeOne(*this);
}
// ! TankPrototypeTwo
Tank* TankPrototypeTwo::clone() const
{
    return new TankPrototypeTwo(*this);
}
// ! TankFactory
TankFactory::TankFactory() 
{
  prototypes_[1] = new TankPrototypeOne("PROTOTYPE_1 ", 50.f);
  prototypes_[2] = new TankPrototypeTwo("PROTOTYPE_2 ", 60.f);
}
Tank* TankFactory::create_tank(size_t index) 
{
  return prototypes_[index]->clone();
}