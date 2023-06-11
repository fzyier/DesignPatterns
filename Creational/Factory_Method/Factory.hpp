#pragma once

#include <iostream>

class ICharacter
{
private:

public:
  virtual ~ICharacter() {};
  virtual void attack() const = 0;
  virtual void defend() const = 0;
};

class Warior : public ICharacter
{
private:

public:
  void attack() const override;
  void defend() const override;
};

class Mage : public ICharacter
{
private:

public:
  void attack() const override;
  void defend() const override;
};

class Archer : public ICharacter
{
private:

public:
  void attack() const override;
  void defend() const override;
};

class CharacterFactory
{
private:

public:
  virtual ~CharacterFactory() {};

  virtual ICharacter* get_character() = 0;

  const void do_character();
  
};

class CharacterWarior : CharacterFactory
{
private:

public:
  ICharacter* get_character() override
  {
    return new Warior();
  }
};

class CharacterMage : CharacterFactory
{
private:

public:
  ICharacter* get_character() override
  {
    return new Mage();
  }
};

class CharacterArcher : CharacterFactory
{
private:

public:
  ICharacter* get_character() override
  {
    return new Archer();
  }
};