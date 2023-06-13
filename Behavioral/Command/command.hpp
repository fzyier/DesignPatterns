#pragma once

#include <iostream>
#include <string>
#include <vector>

class Light 
{
public:
    void turnOn();
    void turnOff();
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
    void addCommand(Command* command);
    void pressButton(int index);
};