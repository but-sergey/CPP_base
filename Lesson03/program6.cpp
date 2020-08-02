#include <iostream>

using namespace std;

int main(int argc, char** args)
{
    int ar[10];

    for(int i, j = 0; i < 10; i++, j+=3)
    {
        ar[i] = j;
        cout << ar[i] << endl;
    }

    return 0;
}