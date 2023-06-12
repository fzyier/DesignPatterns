#pragma once

#include <string>

class DataBase
{
private:
    DataBase(const std::string value): value_(value) {}
    static DataBase* data_base_;
    std::string value_;

public:
    ~DataBase();
    DataBase(DataBase& other) = delete;
    DataBase(DataBase&& other) = delete;
    void operator= (const DataBase & other) = delete;
    void operator= (const DataBase && other) = delete;

    static DataBase* get_instance(const std::string& value);
    const std::string& get_value() const;
};

