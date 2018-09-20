#include <iostream>

#include "line.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    Line line;
    line.setLength(9.0);
    cout << "Lenght of line: " << line.getLength() << endl;

    return 0;
}
