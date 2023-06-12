#include "adapter.hpp"

// ! Vida
double Vida::request() const 
{
    std::cout << seconds_ << '\n';
    return seconds_;
}
// ! Bastergard
double Bastergard::SpecificRequest() const 
{
    return minutes_;
}
// ! Adapter
double Adapter::request() const 
{
    double to_seconds = minutes_ / 60;
    std::cout << to_seconds << '\n';
    return to_seconds;
}