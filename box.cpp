#include "box.hpp"

double Box::getVolume()
{
    return length * breadth * height;
}

void Box::setLength(double length)
{
    this->length = length;
}

void Box::setBreadth(double breadth)
{
    this->breadth = breadth;
}

void Box::setHeight(double height)
{
    this->height = height;
}
