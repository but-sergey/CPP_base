#include <iostream>

using namespace std;

int main(int argc, char** args)
{
    int ar[10];

    for(int i = 0; i < 10; i++)
    {
        ar[i] = i;
        cout << ar[i] << endl;
    }

    return 0;
}