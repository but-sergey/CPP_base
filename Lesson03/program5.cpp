#include <iostream>

using namespace std;

int main(int argc, char** args)
{
    int a = 0;

    while(a < 8)
    {
        if(a++ == 7) continue;
        cout << a << endl;
    }

    return 0;
}