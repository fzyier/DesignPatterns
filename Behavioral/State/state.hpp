#pragma once

#include <iostream>

class TrafficLight 
{
private:
    class State* current_state_;
public:
    TrafficLight();

    void set_state(State* state);
    void perform_action();
};

class State 
{
public:
    virtual void perform_action(TrafficLight* trafficLight) = 0;
};

class GreenState : public State 
{
public:
    void perform_action(TrafficLight* trafficLight) override;
};

class YellowState : public State 
{
public:
    void perform_action(TrafficLight* trafficLight) override;
};

class RedState : public State 
{
public:
    void perform_action(TrafficLight* trafficLight) override;
};