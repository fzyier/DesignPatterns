#include "abstract_factory.hpp"

// ! Box
std::string Box::figure() const
{
    return "Box!";
}
// ! Triangle
std::string Triangle::figure() const
{
    return "Triangle!";
}
// ! Red
std::string Red::color() const 
{
    return "Red";
}
std::string Red::figure_with_color(const IFigure& fgr) const 
{
    const std::string str = fgr.figure();
    return "Red " + str;
}
// ! Blue
std::string Blue::color() const 
{
    return "Blue";
}
std::string Blue::figure_with_color(const IFigure& fgr) const 
{
    const std::string str = fgr.figure();
    return "Blue " + str;
}
// ! BoxRed
IFigure* BoxRed::create_figure() const 
{
    return new Box;
}
IColor* BoxRed::create_color() const 
{
    return new Red;
}
// ! TriangleBlue
IFigure* TriangleBlue::create_figure() const 
{
    return new Triangle;
}
IColor* TriangleBlue::create_color() const 
{
    return new Blue;
}