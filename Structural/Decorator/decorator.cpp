#include "decorator.hpp"

// ! Notifier
std::string Notifier::send() const 
{
    return "Notify";
}
// ! DecoratorNotifier
std::string DecoratorNotifier::send() const 
{
    return this->notify_->send();
}
// ! SMS
std::string SMS::send() const 
{
    return "SMS" + DecoratorNotifier::send();
}
// ! Gmail
std::string Gmail::send() const 
{
    return "Gmail " + DecoratorNotifier::send();
}