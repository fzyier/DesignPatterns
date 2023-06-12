#pragma once

#include <string>
#include <iostream>

class Model 
{
public:
    virtual void show_model() const = 0;

    virtual ~Model();
};
 
class ModelA: public Model 
{
public:
    ModelA();

    void show_model() const;
};
 
class ModelB: public Model 
{
public:
    ModelB();

    void show_model() const;
};

class Share {    
public:
    virtual void function() const = 0;

    virtual ~Share();
};

class ShareModel: public Share 
{
public:
    ShareModel(Model& m) : m_(m) {}

    void share_model() const;
private:

    Model& m_;
};