#include <iostream>

using std::endl;

namespace t
{
    int a = 1;
}

int main(int argc, char** args)
{
    int b = 2;
    int c = t::a + b;

    std::cout << c << endl;

    return 0;
}