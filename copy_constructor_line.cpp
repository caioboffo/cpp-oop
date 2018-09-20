#include <iostream>

using namespace std;

class Line
{
public:
    Line();
    Line(int length);
    Line(const Line &obj);
    ~Line();
    int getLength() { return *ptr; }
    void setLength(int length) { *ptr = length; }

private:
    int *ptr;
};

Line::Line(int length)
{
    cout << "Normal contructor allocating length " << length << endl;
    ptr = new int;
    *ptr = length;
}

Line::Line(const Line &obj)
{
    cout << "Copy constructor allocating pointer " << *obj.ptr << endl;
    ptr = new int;
    *ptr = *obj.ptr;
}

Line::~Line()
{
    cout << "Freeing memomry!" << endl;
    delete ptr;
}

void display(Line line)
{
    cout << "Length of line: " << line.getLength() << endl;
}

int main()
{
    Line line(10);
    display(line);
    Line line2 = line;

    display(line2);
    return 0;
}
