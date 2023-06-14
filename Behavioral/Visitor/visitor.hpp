#pragma once

#include <iostream>
#include <vector>

class ShapeVisitor;

class Shape 
{
public:
    virtual void accept(ShapeVisitor& visitor) = 0;
};

class Circle : public Shape 
{
public:
    void accept(ShapeVisitor& visitor) override;
};

class Rectangle : public Shape 
{
public:
    void accept(ShapeVisitor& visitor) override;
};

class Triangle : public Shape 
{
public:
    void accept(ShapeVisitor& visitor) override;
};

class ShapeVisitor 
{
public:
    virtual void visit(Circle& circle) = 0;
    virtual void visit(Rectangle& rectangle) = 0;
    virtual void visit(Triangle& triangle) = 0;
};

class AreaVisitor : public ShapeVisitor 
{
public:
    void visit(Circle& circle) override;
    void visit(Rectangle& rectangle) override;
    void visit(Triangle& triangle) override;
};