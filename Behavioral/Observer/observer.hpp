#pragma once

#include <iostream>
#include <vector>

class Observer 
{
public:
    virtual void update(float temperature) = 0;
};

class WeatherStation 
{
private:
    std::vector<Observer*> observers_;
    float temperature_;

    void notify();
public:
    void add_observer(Observer* observer);
    void remove_observer(Observer* observer);
    void set_temperature(float newTemperature);
};

class Display 
{
public:
    void update(float temperature);
};

class Logger 
{
public:
    void update(float temperature);
};