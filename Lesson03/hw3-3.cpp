#include <iostream>

using namespace std;

enum my_constants
{
    mcConstant1 = 5,
    mcConstant2 = 4,
    mcConstant3 = 3,
    mcConstant4 = 2,
    mcConstant5 = 1,
    mcConstant6 = 0
};

int main(int argc, char** args)
{
    int num;
    cout << "Enter integer number: ";
    cin >> num;

    switch(num)
    {
    case mcConstant1:
    case mcConstant2:
    case mcConstant3:
        cout << "Number " << num << " is included in first half of the set." << endl;
        break;
    case mcConstant4:
    case mcConstant5:
    case mcConstant6:
        cout << "Number " << num << " is included in second half of the set." << endl;
        break;
    default:
        cout << "Number " << num << " is not included in the set.";
        break;
    }

    return 0;
}