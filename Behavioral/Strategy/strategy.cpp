#include "strategy.hpp"

// ! BubbleSortStrategy
void BubbleSortStrategy::sort(std::vector<int>& data)  
{
    std::cout << "Sorting using Bubble Sort." << std::endl;
}
// ! QuickSortStrategy
void QuickSortStrategy::sort(std::vector<int>& data)  
{
    std::cout << "Sorting using Quick Sort." << std::endl;
}
// ! Sorter
void Sorter::set_sorting_strategy(SortingStrategy* strategy) 
{
    sorting_strategy_ = strategy;
}
void Sorter::perform_sort(std::vector<int>& data) 
{
    sorting_strategy_->sort(data);
}