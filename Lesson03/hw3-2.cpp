#include <iostream>

using namespace std;

int main(int argc, char** args)
{
    int num;
    cout << "Enter integer number: ";
    cin >> num;

    if(num > 5)
    {
        cout << "Enter another integer number: ";
        cin >> num;
    }

    if((num > 5) && (num < 10))
        num -= 5;
    else
        num = 5 - num;
    
    if(num > 0)
        cout << "Result number (num = " << num << ") is positive." << endl;
    else if(num == 0)
        cout << "Result number (num = " << num << ") is equal to zero." << endl;
    else
        cout << "Result number (num = " << num << ") is negative." << endl;

    return 0;
}