#include <iostream>

using namespace std;

enum constant_set
{
    csConstant1 = 0,
    csConstant2 = 1,
    csConstant3 = 2
} c_set;

int main(int argc, char** args)
{
    int a;
    cout << "Enter num: ";
    cin >> a;

    switch(a)
    {
    case csConstant1:
        cout << "Constant 1" << endl;
        break;
    case csConstant2:
        cout << "Constant 2" << endl;
    case csConstant3:
        cout << "Constant 3" << endl;
        break;
    default:
        cout << "No num" << endl;
        break;
    }

    return 0;
}