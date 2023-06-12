#pragma once

#include <string>

class INotifier 
{
 public:
  virtual ~INotifier() {}
  virtual std::string send() const = 0;
};

class Notifier : public INotifier 
{
 public:
  std::string send() const override;
};

class DecoratorNotifier : public INotifier 
{

 protected:
  INotifier* notify_;

 public:
  DecoratorNotifier(INotifier* other) : notify_(other) {}

  std::string send() const override;
};

class SMS : public DecoratorNotifier 
{

 public:
  SMS(INotifier* other) : DecoratorNotifier(other) {}
  std::string send() const override;
};

class Gmail : public DecoratorNotifier 
{
 public:
  Gmail(INotifier* other) : DecoratorNotifier(other) {}

  std::string send() const override;
};