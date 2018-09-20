#include <iostream>
#include "line.hpp"

using namespace std;

Line::Line()
{
    cout << "Object is being created" << endl;
}

Line::Line(double length) : length(length)
{
    cout << "Object is being created, length = " << length << endl;
}


Line::~Line()
{
    cout << "Object is being deleted" << endl;
}

void Line::setLength(double length)
{
    this->length = length;
}
