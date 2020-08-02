#include <iostream>

using namespace std;

namespace t
{
    int a = 1;
}

int main(int argc, char** args)
{
    int b = 2;
    int c = t::a + b;

    cout << c << endl;

    return 0;
}