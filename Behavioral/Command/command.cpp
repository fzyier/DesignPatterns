#include "command.hpp"

// ! Light
void Light::turnOn() 
{
    std::cout << "Light is on" << '\n';
}
void Light::turnOff() 
{
    std::cout << "Light is off" << '\n';
}
// ! TurnOnCommand
void TurnOnCommand::execute() 
{
    light_->turnOn();
}
// ! TurnOffCommand
void TurnOffCommand::TurnOffCommand::execute() 
{
    light_->turnOff();
}
// ! RemoteControl
void RemoteControl::addCommand(Command* command) 
{
    commands_.push_back(command);
}
void RemoteControl::pressButton(int index) 
{
    if (index >= 0 && index < commands_.size()) 
    {
        commands_[index]->execute();
    }
}