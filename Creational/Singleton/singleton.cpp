#include "singleton.hpp"

DataBase* DataBase::data_base_ = nullptr;

DataBase::~DataBase()
{
    delete data_base_;
}

DataBase* DataBase::get_instance(const std::string& value)
{
    if (data_base_ == nullptr)
    {
        data_base_ = new DataBase(value);
    }
    return data_base_;
}

const std::string& DataBase::get_value() const 
{
    return value_;
} 