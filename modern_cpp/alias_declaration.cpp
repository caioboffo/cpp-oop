#include <memory>
#include <unordered_map>
#include <string>
#include <list>

using namespace std;
// replaces typedefs ... C++11 Like declaration so it is modern.
using UPtrMapSS =
    unique_ptr<unordered_map<string, string>>;

typedef void (*FP)(int, const string&); // typedef

using FP = void (*)(int, const string&); // exact same alias declaration

class MyAlloc;

// alias declaration maybe templatized in C++ realy great!
template<typename T>
using MyAllocList = list<T, MyAlloc<T>>;

// example typedef inside a template
template<typename T>
class Widget
{
private:
    typename MyAllocList<T>::type list; // ugly
};

// with aliases the need of typename before MyAllocList vanishes
template<typename T>
using MyAllocList = list<T, MyAlloc<T>>;
template<typename T>
class Widgez {
private:
    MyAllocList<T> list;  // great!
};

int main()
{
    UPtrMapSS u;
    return 0;
}
