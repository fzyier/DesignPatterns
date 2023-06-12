#include "adapter.hpp"

// ! Vida
double Vida::request() const 
{
    std::cout << seconds << '\n';
    return seconds;
}
// ! Bastergard
double Bastergard::SpecificRequest() const 
{
    return minutes;
}
// ! Adapter
double Adapter::request() const 
{
    double to_seconds = minutes / 60;
    std::cout << to_seconds << '\n';
    return to_seconds;
}