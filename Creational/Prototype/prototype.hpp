#pragma once

#include <string>
#include <iostream>
#include <unordered_map>

class Tank
{
protected:
    std::string name_;
    double damage_;
public:
    Tank();
    Tank(std::string name) : name_(name) {};
    virtual ~Tank();
    virtual Tank* clone() const = 0;
    virtual void show() const;
};

class TankPrototypeOne : public Tank
{
private:
    double shield_;
public:
    TankPrototypeOne(std::string name, double shield) : Tank(name), shield_(shield) {};
    Tank* clone() const override;
};

class TankPrototypeTwo : public Tank
{
private:
    double speed_;
public:
    TankPrototypeTwo(std::string name, double speed) : Tank(name), speed_(speed) {};
    Tank* clone() const override;
};

class TankFactory 
{
 private:
  std::unordered_map<size_t, Tank* > prototypes_;

 public:
  TankFactory();
  ~TankFactory();
  Tank* create_tank(size_t index);
};