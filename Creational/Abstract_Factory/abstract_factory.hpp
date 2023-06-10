#pragma once
#include <string>

class IFigure
{
private:

public:
    virtual ~IFigure();
    virtual std::string figure() const = 0;
};

class Box : public IFigure
{
private:

public:
    ~Box();
    std::string figure() const override;
};

class Triangle : public IFigure
{
private:

public:
    ~Triangle();
    std::string figure() const override;
};

class IColor
{
private:

public:
    virtual ~IColor();
    virtual std::string color() const = 0;
    virtual std::string figure_with_color(const IFigure& fgr) const = 0;
};

class Red : public IColor
{
private:

public:
    ~Red();
    std::string color() const override;

    std::string figure_with_color(const IFigure& fgr) const override;
};

class Blue : public IColor
{
private:

public:
    ~Blue();

    std::string color() const override;

    std::string figure_with_color(const IFigure& fgr) const override;
};

class FigureFactory
{
private:

public:
    virtual ~FigureFactory();
    virtual IFigure* create_figure() const = 0;
    virtual IColor* create_color() const = 0;
};

class BoxRed : public FigureFactory
{
private:

public:
    ~BoxRed();
    IFigure* create_figure() const override;

    IColor* create_color() const override;
};

class TriangleBlue : public FigureFactory
{
private:

public:
    ~TriangleBlue();
    IFigure* create_figure() const override;

    IColor* create_color() const override;
};