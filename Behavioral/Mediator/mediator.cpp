#include "mediator.hpp"

// ! User
void User::send(const std::string& message)
{
    mediator_->sendMessage(this, message);
}
void User::receive(const std::string& sender, const std::string& message) 
{
    std::cout << name_ << " received a message from " << sender << ": " << message << std::endl;
}
// ! Chatroom
void Chatroom::addColleague(Colleague* colleague) 
{
    colleagues.push_back(colleague);
}
void Chatroom::sendMessage(Colleague* sender, const std::string& message)  
{
    for (Colleague* colleague : colleagues) 
    {
        if (colleague != sender) 
        {
            colleague->receive(sender->name_, message);
        }
    }
}