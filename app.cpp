#include <iostream>

#include "box.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    Box box1, box2;
    double volume = 0.0;

    box1.height = 5.0;
    box1.length = 6.0;
    box1.breadth = 7.0;

    box2.height = 10.0;
    box2.length = 12.0;
    box2.breadth = 13.0;

    volume = box1.getVolume();
    cout << "Volume of box1 is " << volume << endl;

    volume = box2.getVolume();
    cout << "Volume of box2 is " << volume << endl;

    return 0;
}
