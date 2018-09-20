#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x(0);
    int y = 0;
    int z{0};
    int w = {0};

    /*
      Widget w1;         // call default constructor;
      Widget w2 = w1;    // not an assigment; call copy constructor
      w1 = w2;           // an assignment; calls copy operator=

      C++11 introduces uniform initialization: a single initialization
      that can at least in concept, be used anywhere and express everything

    */

    vector<int> v {1, 3, 5};  // initial content is 1, 3, 5;

    class Widget
    {
    private:
        int x {0}; // fine, x's default value is 0
        int y = 0; // also fine
        int z(0);  // error!
    };

    /* braced initialization prohibits implicit narrowing conversions
        among built-in types i.e double to int */
    double x, y;
    int sum{ x + y };

    return 0;
}
