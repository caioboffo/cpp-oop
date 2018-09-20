class base
{
public:
    void func(double);
protected:
    void func(long);
private:
    void func(int);
};

class demo : public base
{
public:
    demo() { func(42.0); }
    void f() { func(42); };
};
