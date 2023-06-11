#include "Builder.hpp"

// ! Beg
void Beg::show_items()
{
    std::cout << "Beg contains:\n";
    for (const auto& i : items_) 
    {
        std::cout << i << '\n';
    }
    std::cout << '\n';
}
// ! BegBuilder
BegBuilder::BegBuilder()
{

}
BegBuilder::~BegBuilder()
{

}

void BegBuilder::reset()
{
    this->beg_= new Beg();
}
void BegBuilder::add_a() const 
{
    this->beg_->items_.push_back("Keyboard");
}
void BegBuilder::add_b() const 
{
    this->beg_->items_.push_back("Laptop");
}
void BegBuilder::add_c() const 
{
    this->beg_->items_.push_back("Mouse");
}
Beg* BegBuilder::get_product() 
{
    Beg* result= this->beg_;
    this->reset();
    return result;
}
// ! Director
void Director::set_builder(IBuilder* builder)
{
    this->builder=builder;
}

void Director::build_min()
{
    this->builder->add_a();
}

void Director::build_max()
{
    this->builder->add_a();
    this->builder->add_b();
    this->builder->add_c();
}