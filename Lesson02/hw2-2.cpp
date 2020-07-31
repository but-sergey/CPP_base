#include <iostream>
#include "hw2-2.h"

using namespace std;

void print(int num);

int main(int argc, char** argv)
{
    int dividend = 12;
    int divisor = 5;

    print(remainder(dividend, divisor));

    return 0;
}

int remainder(int dividend, int divisor)
{
    return dividend % divisor;
}

void print(int num)
{
    cout << num;
}