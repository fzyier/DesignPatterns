#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class SortingStrategy 
{
public:
    virtual void sort(std::vector<int>& data) = 0;
};

class BubbleSortStrategy : public SortingStrategy 
{
public:
    void sort(std::vector<int>& data) override;
};

class QuickSortStrategy : public SortingStrategy 
{
public:
    void sort(std::vector<int>& data) override;
};

class Sorter 
{
private:
    SortingStrategy* sorting_strategy_;
public:
    Sorter(SortingStrategy* strategy) : sorting_strategy_(strategy) {}
    void set_sorting_strategy(SortingStrategy* strategy);
    void perform_sort(std::vector<int>& data);
};