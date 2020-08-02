#include <iostream>

using namespace std;

int main(int argc, char** args)
{
    int a = 2;
    
    while(a < 10) a++;

    do
    {
        cout << --a << endl;
    } while (a >= 1);

    cout << a++ + ++a << endl;

    return 0;
}