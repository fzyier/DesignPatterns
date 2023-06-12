#pragma once

#include <iostream>
#include <string>

class IImage 
{
public:
    virtual void display() = 0;
};

class Image : public IImage 
{
private:
    std::string filename;
public:
    Image(const std::string& filename) : filename(filename) 
    {
        loadFromDisk();
    }
    void display() override;
    void loadFromDisk();
};

class ImageProxy : public IImage 
{
private:
    std::string filename;
    Image* realImage;

public:
    ImageProxy(const std::string& filename) : filename(filename), realImage(nullptr) {}
    void display() override;
};