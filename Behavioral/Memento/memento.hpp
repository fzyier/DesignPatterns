#pragma once

#include <iostream>
#include <string>
#include <vector>

class Data 
{
private:
    std::string name_;

public:
    Data(const std::string& name) : name_(name) {}
    std::string get_name() const;
};

class Saver 
{
private:
    std::vector<Data> data_;
public:
    Saver();
    void add_memento(const Data& memento);
    Data get_memento(int index) const;
};

class Castle 
{
private:
    std::string king_name_;
    Saver saver_;
public:
    void set_name(const std::string& name);
    std::string get_name() const;
};
