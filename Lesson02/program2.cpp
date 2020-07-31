#include <iostream>

using namespace std;

void print(char str[7])
{
    str[0] = 'd';
    cout << str << endl;
}

void print(int arr[5])
{
    cout << arr << endl;
}

int main(int argc, char** argv)
{
    int array[5] = {-1, 2, 4, 5, 6};
    cout << array[0] << endl;

    char str[7] = "str";
    print(str);
    print(array);

    return 0;
}