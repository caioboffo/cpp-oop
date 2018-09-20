/* UNSCOPED ENUMS EXAMPLE */

// enum Color { black, white, red };
// auto white = false ; // error! white already declared in this scope


/* SCOPED ENUMS dont leak names into other scopes */
// strong typed cant compare color do int or doubless
// forward declared

enum class Color { black, white, red };

int main()
{
    Color c = white;                   // error no whie in scope
    Color c = Color::white;            // fine
    auto c = Color::red;               // also fine
}
