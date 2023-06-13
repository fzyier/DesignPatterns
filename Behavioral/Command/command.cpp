#include "command.hpp"

// ! Light
void Light::turn_on() 
{
    std::cout << "Light is on" << '\n';
}
void Light::turn_off() 
{
    std::cout << "Light is off" << '\n';
}
// ! TurnOnCommand
void TurnOnCommand::execute() 
{
    light_->turn_on();
}
// ! TurnOffCommand
void TurnOffCommand::TurnOffCommand::execute() 
{
    light_->turn_off();
}
// ! RemoteControl
void RemoteControl::add_command(Command* command) 
{
    commands_.push_back(command);
}
void RemoteControl::press_button(int index) 
{
    if (index >= 0 && index < commands_.size()) 
    {
        commands_[index]->execute();
    }
}