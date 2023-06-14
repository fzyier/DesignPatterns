#include "visitor.hpp"

// ! AreaVisitor
void AreaVisitor::visit(Circle& circle)  
{
    std::cout << "Calculating area of Circle." << '\n';
}
void AreaVisitor::visit(Rectangle& rectangle)  
{
    std::cout << "Calculating area of Rectangle." << '\n';
}
void AreaVisitor::visit(Triangle& triangle)  
{
    std::cout << "Calculating area of Triangle." << '\n';
}