#include <iostream>

using namespace std;

int main(int argc, char** args)
{
    const int MaxNum = 20;
    char ar[MaxNum];

    for(int i = 0, j = 0; i < MaxNum; i++, j+=3)
    {
        ar[i] = j;
    }

    for(int i = 0; i < MaxNum; i++)
    {
        cout << ar[i] << ' ';
    }
    
    cout << endl;

    return 0;
}