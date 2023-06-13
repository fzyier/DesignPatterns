#pragma once

#include <iostream>
#include <vector>

template<typename T>
class IIterator 
{
public:
    virtual T next() = 0;
    virtual bool has_next() = 0;
};

template<typename T>
class Iterator : public IIterator<T> 
{
private:
    std::vector<T>& container_;
    int index_;
public:
    Iterator(std::vector<T>& container) : container_(container), index_(0) {}
    T* next() override;
    bool has_next() override;
};

template<typename T>
class Container 
{
private:
    std::vector<T> container_;

public:
    void add_item(const T& item);
    IIterator<T>* createIterator();
};
