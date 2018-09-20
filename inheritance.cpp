#include <iostream>

using namespace std;

class shape_t
{
public:
    int height, width;
    // base class must provide definition or require override = 0
    virtual void sail() const {}
protected:
    int shared_int;
private:
    int hide_var;
};

class text_t
{
public:
    int text_size;
private:
    int private_msg;
    virtual void bow(int n) const {}
};

// inheritance allow access to public and protected members
// private inheritance members public base members are not
// accessible from outside the class
// public inheritance allow public base members to be accessed
// outside in the sub class;
// protected members are only visible in the base class
// private classes are not acessible in any case
class text_shape_t : public shape_t
{
public:
    text_shape_t() {
        this->height = 100;
        this->shared_int = 10;
        this->hide_var = 10;
    }
    virtual void sail() const override;

};

void text_shape_t::sail() const
{
    cout << "This text sail ..." << endl;
}

class text_view_t : public text_t
{
private:
    virtual void bow(int n) const override
    {
        cout << "do something " << endl;
    }
};

int main()
{
    text_shape_t *text_view = new text_shape_t;
    text_view->height = 400;
    text_view->shared_int = 10;
    text_view->hide_var = 1;

    text_view_t *t = new text_view_t;
    t->text_size = 99;

    cout << text_view->height << endl;
    text_view->sail();

    return 0;
}
