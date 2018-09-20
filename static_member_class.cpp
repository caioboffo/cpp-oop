#include <iostream>

using namespace std;

class Box
{
public:
    static int objectCount;

    Box(double length, double breadth, double height) :
        length(length), breadth(breadth), height(height) {
        cout << "Constructor called." << endl;
        objectCount++;
    }
    double Volume() {
        return length * breadth * height;
    }

private:
    double length, breadth, height;
};
// static member initialization ...
int Box::objectCount = 0;

int main()
{
    Box box1(1.0, 2.0, 3.0);
    Box box2(2.0, 3.0, 4.0);

    cout << "Total objects: " << Box::objectCount << endl;
    return 0;
}
