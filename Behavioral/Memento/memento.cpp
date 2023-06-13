#include "memento.hpp"

// ! Data
std::string Data::get_name() const 
{
    return name_;
}
// ! Saver
void Saver::add_memento(const Data& memento) 
{
    data_.push_back(memento);
}
Data Saver::get_memento(int index) const 
{
    return data_[index];
}
// ! Castle
void Castle::set_name(const std::string& name) 
{
    this->king_name_ = name;
    saver_.add_memento(Data(name));
}
std::string Castle::get_name() const 
{
    return king_name_;
}