#include <iostream>

using namespace std;

int main(int argc, char** args)
{
    cout << "Enter num 1 ";
    int a, b;
    cin >> a;
    cout << "Enter num 2 ";
    cin >> b;

    ((a <= 10) || (b >= 5)) ? cout << "a <= 10 or b >= 5" << endl : cout << "NO!" << endl;

    return 0;
}