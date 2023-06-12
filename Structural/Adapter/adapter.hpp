#pragma once

#include <string>
#include <iostream>

class Vida 
{
 private:
 double seconds;
 public:
  virtual ~Vida() = default;
  virtual double request() const;
};

class Bastergard
{
protected:
  double minutes;
public:
  double SpecificRequest() const;
};

class Adapter : public Vida, public Bastergard 
{
 public:
  Adapter() {}
  double request() const override;
};