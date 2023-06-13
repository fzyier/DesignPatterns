#pragma once

#include <iostream>
#include <string>
#include <vector>

class Light 
{
public:
    void turn_on();
    void turn_off();
};

class Command
 {
public:
    virtual void execute() = 0;
};

class TurnOnCommand : public Command
{
private:
    Light* light_;

public:
    TurnOnCommand(Light* light) : light_(light) {}

    void execute() override;
};

class TurnOffCommand : public Command 
{
private:
    Light* light_;

public:
    TurnOffCommand(Light* light) : light_(light) {}

    void execute() override;
};

class RemoteControl 
{
private:
    std::vector<Command*> commands_;

public:
    void add_command(Command* command);
    void press_button(int index);
};