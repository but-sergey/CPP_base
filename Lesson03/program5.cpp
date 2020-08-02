#include <iostream>

using namespace std;

int main(int argc, char** args)
{
    int a = 20;
    int b = 0;

    while(b!=a)
    {
        cout << "Enter num: ";
        cin >> b;

        if(b < a)
        {
            cout << "Gimme more!" << endl;
        }
        else if (b > a)
        {
            cout << "Gimme less!" << endl;
        }
    }
    cout << "Guess!" << endl;

    return 0;
}