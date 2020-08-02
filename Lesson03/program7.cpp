#include <iostream>

using namespace std;

int main(int argc, char** args)
{
    int a;
    cin >> a;
    
    if(a == 0) throw "Divison by zero!\n";

    cout << 4 / a;

    return 0;
}