#pragma once

#include <iostream>
#include <string>
#include <vector>

class Employee {
protected:
    std::string name_;
public:
    Employee(const std::string& name) : name_(name) {}
    virtual void add(Employee* employee) {}
    virtual void remove(Employee* employee) {}
    virtual void show_information() const = 0;
};

class Developer : public Employee {
public:
    Developer(const std::string& name) : Employee(name) {}
    void show_information() const override;
};

class Manager : public Employee {
private:
    std::vector<Employee*> employees;
public:
    Manager(const std::string& name) : Employee(name) {}
    void add(Employee* employee) override;
    void remove(Employee* employee) override;
    void show_information() const override;
};