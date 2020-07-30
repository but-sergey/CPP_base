#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** args)
{
    int a  = 264000;
    unsigned long b = 123456789;

    cout << dec << a << endl;
    cout << hex << &a << endl;
    cout << dec << b << endl;
    cout << hex << &b << endl;

    return 0;
}