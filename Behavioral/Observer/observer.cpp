#include "observer.hpp"

// ! WeatherStation
void WeatherStation::notify() 
{
    for (Observer* observer : observers_) 
    {
        observer->update(temperature_);
    }
}

void WeatherStation::add_observer(Observer* observer) 
{
    observers_.push_back(observer);
}

void WeatherStation::remove_observer(Observer* observer) 
{
    for (auto it = observers_.begin(); it != observers_.end(); ++it) 
    {
        if (*it == observer) {
            observers_.erase(it);
            break;
        }
    }
}

void WeatherStation::set_temperature(float newTemperature) 
{
    temperature_ = newTemperature;
    notify();
}

// ! Display
void Display::update(float temperature) 
{
    std::cout << "Display: The current temperature is " << temperature << " degrees Celsius." << std::endl;
}

// ! Logger
void Logger::update(float temperature) 
{
    std::cout << "Logger: Recording temperature: " << temperature << " degrees Celsius." << std::endl;
}