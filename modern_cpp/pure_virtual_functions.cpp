#include <iostream>

using namespace std;

class base
{
public:
    // = 0 makes a function abstract meaning that it must be override
    // by its derrived classes .
    // also if the function is abstract the entire class is abstract
    // tought you cannot instantiate it.
    virtual void func() = 0 ;
};

void base::func()
{
    cout << "this is base func" << endl;
}
class derived : public base
{
public:
    void sayHello();
};

void derived::sayHello()
{
    cout << "hello" << endl;
}

class derived2 : public derived
{
public:
    void func();
};

void derived2::func()
{
    cout << "this is derived2 func" << endl;
}
int main()
{
    derived *d = new derived2;
    d->func();
    return 0;
}
