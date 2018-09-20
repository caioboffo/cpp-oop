/* Namespaces allow us to group named entities that otherwise would have global
   scope into narrower scopes, giving them namespace scope. This allows
   organizing the elements of programs into different logical scopes reffered
   to by names

   * Namespace is a feture added in c++ and not present in C.
   * A Namespace is a declarative region that provides a scope to the
     identifier (names of types, function, variables etc) inside it.
   * Multiple namespace blocks with the same name are allowed.  */

#include <iostream>

using namespace std;

namespace first
{
    int value = 200;
}

int main ()
{
    cout << "Hello World" << endl;
    return 0;
}
