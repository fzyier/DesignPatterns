#pragma once

#include <string>
#include <iostream>

class Joe 
{
public:
  size_t years_ = 20;
};

class Mary 
{
public:
  size_t years_ = 20;
};

class Couple 
{
protected:
  Joe *man_;
  Mary *woman_;

public:
  Couple() : man_(new Joe()), woman_(new Mary()) {};
  ~Couple();
  void show_couple_years();
};