#include <iostream>

using namespace std;

class Box
{
    double width;
public:
    double length;
    friend void printWidth(Box box);
    void setWidth(double width);
};

void Box::setWidth(double width)
{
    this->width = width;
}

void printWidth(Box box)
{
    /* because printWidth is a friend of Box it can
       directly acces any member of this class */
    cout << "Width of box : " << box.width << endl;
}

int main()
{
    Box box;

    box.setWidth(10.0);
    printWidth(box);
    return 0;
}
