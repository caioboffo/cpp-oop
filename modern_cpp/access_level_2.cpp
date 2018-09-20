class base
{
public:
    int x;
protected:
    int y;
};

class derived1 : private base
{
public:
    using base::x;              // x is now public.

};
