#include "facade.hpp"

// ! Couple
Couple::~Couple() 
{
    delete man_;
    delete woman_;
}

void Couple::show_couple_years() 
{
    std::cout << man_->years_ << ' ' << woman_->years_ << '\n'; 
}