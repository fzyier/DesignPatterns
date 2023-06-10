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

  virtual ICharacter* CharacterGetter() = 0;

  const void CharacterDo();
  
};

class CharacterWarior : CharacterFactory
{
private:

public:
  ICharacter* CharacterGetter() override
  {
    return new Warior();
  }
};

class CharacterMage : CharacterFactory
{
private:

public:
  ICharacter* CharacterGetter() override
  {
    return new Mage();
  }
};

class CharacterArcher : CharacterFactory
{
private:

public:
  ICharacter* CharacterGetter() override
  {
    return new Archer();
  }
};