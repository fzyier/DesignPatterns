#include "proxy.hpp"

// ! Image
void Image::display() 
{
    std::cout << "Displaying image: " << filename << '\n';
}
void Image::loadFromDisk() 
{
    std::cout << "Loading image from disk: " << filename << '\n';
}
// ! ImageProxy
void ImageProxy::display() 
{
    if (realImage == nullptr) 
    {
        realImage = new Image(filename);
    }
    realImage->display();
}