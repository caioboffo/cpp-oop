#include <memory>
#include <iostream>

class point_t
{
public:
    point_t(int _x, int _y) : x(_x), y(_y) {}
    void set_x(int x);
    int get_x() const;
    void set_y(int y);
    int get_y() const;
private:
    int x,y;
};

void point_t::set_x(int x)
{
    this->x = x;
}

int point_t::get_x() const
{
    return this->x;
}

void point_t::set_y(int y)
{
    this->y = y;
}

int point_t::get_y() const
{
    return this->y;
}

class ref_t
{
public:
    // pass p as reference but do not allow modification
    void do_something(const int &p)
    {
        int a = 10;
        int b = a * p;
        std:: cout << b << std::endl;
    }
    /* pass as reference no copy but disable modifications
       parameter is const */
    void func(const point_t &point)
    {
        std::cout << "do something" << std::endl;
        std::cout << point.get_x() << ","
                  << point.get_y() << std::endl;
    }
    // create variable in other scope
    // return variable to parent scope
    point_t create_point() {
        return point_t(0, 0);
    }

    point_t &make_ref_to_point()
    {
        return point_t(10,10);
    }
};

int main(int argc, char *argv[])
{
    std::unique_ptr<point_t> point (new point_t(3, 4));
    point_t *another_point = new point_t(1,2);
    std::cout << point->get_x() << std::endl;
    std::cout << another_point->get_y() << std::endl;

    return 0;
}
