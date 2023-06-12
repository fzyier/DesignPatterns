#include "bridge.hpp"

// ! ModelA
void ModelA::show_model() const 
{
    std::cout << "ModelA" << '\n';
}
// ! ModelB
void ModelB::show_model() const 
{
    std::cout << "ModelB" << '\n';
}
// ! ShareModel
void ShareModel::share_model() const 
{
    std::cout << "Share ";
    m_.show_model();
}