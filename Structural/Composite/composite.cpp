#include "composite.hpp"

// ! Developer
void Developer::show_information() const 
{
    std::cout << "Developer: " << name_ << '\n';
}
// ! Manager
void Manager::add(Employee* employee)  
{
    employees.push_back(employee);
}

void Manager::remove(Employee* employee)  
{
    auto it = find(employees.begin(), employees.end(), employee);
    if (it != employees.end()) {
        employees.erase(it);
    }
}

void Manager::show_information() const  
{
    std::cout << "Manager: " << name_ << '\n';
    for (const auto& employee : employees) 
    {
        employee->show_information();
    }
}