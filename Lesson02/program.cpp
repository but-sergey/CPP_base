#include <iostream>
#include <iomanip>

using namespace std;

void PrintVal(int a, unsigned long b)
{
    cout << dec << a << endl;
    cout << hex << &a << endl;
    cout << dec << b << endl;
    cout << hex << &b << endl;
}

int main(int argc, char** args)
{
    int a  = 264000;
    unsigned long b = 123456789;

    PrintVal(a, b);

    return 0;
}