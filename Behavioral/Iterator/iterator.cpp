#include "iterator.hpp"

// ! Iterator
template<typename T>
T* Iterator<T>::next() 
{
    return container_[index_++];
}
template<typename T>
bool Iterator<T>::has_next()  
{
    return index_ < container_.size();
}
// ! Container
template<typename T>
void Container<T>::add_item(const T& item) 
{
    container_.push_back(item);
}
template<typename T>
IIterator<T>* Container<T>::createIterator() 
{
    return new Iterator<T>(container_);
}