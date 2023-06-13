#pragma once

#include <iostream>
#include <string>
#include <vector>

class Colleague;

class Mediator {
public:
    virtual void sendMessage(Colleague* sender, const std::string& message) = 0;
};

class Colleague 
{
public:
    Mediator* mediator_;
    std::string name_;

    Colleague(Mediator* mediator, const std::string& name) : mediator_(mediator), name_(name) {}
    virtual void send(const std::string& message) = 0;
    virtual void receive(const std::string& sender, const std::string& message) = 0;
};

class User : public Colleague 
{
public:
    User(Mediator* mediator, const std::string& name) : Colleague(mediator, name) {}
    void send(const std::string& message) override;
    void receive(const std::string& sender, const std::string& message) override;
};

class Chatroom : public Mediator 
{
public:
    std::vector<Colleague*> colleagues;
    void addColleague(Colleague* colleague);
    void sendMessage(Colleague* sender, const std::string& message) override;
};