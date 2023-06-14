#include <iostream>

class HotBeverage 
{
public:
    void prepare_beverage();
    virtual void brew() = 0;
    virtual void add_condiments() = 0;
    void boil_water();
    void pour_into_cup();
};

class Coffee : public HotBeverage 
{
public:
    void brew() override;
    void add_condiments() override;
};

class Tea : public HotBeverage 
{
public:
    void brew() override;
    void add_condiments() override;
};