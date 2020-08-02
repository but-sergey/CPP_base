#include <iostream>
#include <exception>

using namespace std;

int main(int argc, char** args)
{
    int a;
    cin >> a;

    try
    {
        if(a == 0) throw std::runtime_error("Division by zero!");
        cout << 4 / a << endl;
    }
    catch(std::runtime_error& e)
    {
        cout << e.what();
    }
    

    return 0;
}