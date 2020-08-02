#include <iostream>

using namespace std;

int main(int argc, char** args)
{
    unsigned int num;
    cout << "Enter unsigned integer: ";
    cin >> num;

    if(num <= 3)
    {
        do
        {
            cout << "num = " << num << endl;
            num = num - 1;
        } while (num > 0);
    }
    else
        cout << "Number is more then 3!";

    return 0;
}