#include "state.hpp"

// ! TrafficLight
TrafficLight::TrafficLight() 
{
    current_state_ = new GreenState();
}

void TrafficLight::set_state(State* state) 
{
    delete current_state_;
    current_state_ = state;
}

void TrafficLight::perform_action() 
{
    current_state_->perform_action(this);
}

// ! GreenState
void GreenState::perform_action(TrafficLight* trafficLight) 
{
    std::cout << "Green Light: Go!" << std::endl;
    trafficLight->set_state(new YellowState());
}

// ! YellowState
void YellowState::perform_action(TrafficLight* trafficLight) 
{
    std::cout << "Yellow Light: Prepare to stop." << std::endl;
    trafficLight->set_state(new RedState());
}

// ! RedState
void RedState::perform_action(TrafficLight* trafficLight) 
{
    std::cout << "Red Light: Stop!" << std::endl;
    trafficLight->set_state(new GreenState());
}