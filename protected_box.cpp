#include <iostream>

using namespace std;

class Box
{
protected:
    double width;
};

class SmallBox : Box
{
public:
    void setSmallWidth(double width);
    double getSmallWidth() const;
};

double SmallBox::getSmallWidth() const
{
    return width;
}

void SmallBox::setSmallWidth(double width)
{
    this->width = width;
}

int main()
{
    SmallBox box;

    box.setSmallWidth(6.0);
    cout << "Box width: " << box.getSmallWidth() << endl;
    return 0;
}
