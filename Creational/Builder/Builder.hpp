#pragma once

#include <iostream>
#include <vector>

class Beg
{
private:
public:
    std::vector<std::string> items_;
    void show_items();
};

class IBuilder
{
    public:
    virtual ~IBuilder(){}
    virtual void add_a() const = 0;
    virtual void add_b() const = 0;
    virtual void add_c() const = 0;
};

class BegBuilder : public IBuilder
{
private:
    Beg* beg_;

public:

    BegBuilder();
    ~BegBuilder();
    void reset();
    void add_a() const override;
    void add_b() const override;
    void add_c() const override;
    Beg* get_product();
};

class Director{

private:
    IBuilder* builder;

public:
    void set_builder(IBuilder* builder);
    void build_min();
    void build_max();
};