#include "template_method.hpp"

// ! HotBeverage
void HotBeverage::prepare_beverage() 
{
    boil_water();
    brew();
    pour_into_cup();
    add_condiments();
}
void HotBeverage::boil_water() 
{
    std::cout << "Boiling water..." << std::endl;
}
void HotBeverage::pour_into_cup() 
{
    std::cout << "Pouring into cup..." << std::endl;
}

// ! Coffee
void Coffee::brew()  
{
    std::cout << "Brewing coffee..." << std::endl;
}
void Coffee::add_condiments()  
{
    std::cout << "Adding sugar and milk..." << std::endl;
}

// ! Tea
void Tea::brew()  
{
    std::cout << "Steeping tea leaves..." << std::endl;
}
void Tea::add_condiments()  
{
    std::cout << "Adding lemon..." << std::endl;
}