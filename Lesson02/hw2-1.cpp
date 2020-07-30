#include <iostream>

using namespace std;

int main(int argc, char** args)
{
    short a = 45000;
    unsigned char b = 1400;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

// Консоль:
// D:\GitHub\CPP_base\Lesson02>clang -o hw2-1.exe hw2-1.cpp
// hw2-1.cpp:7:15: warning: implicit conversion from 'int' to 'short' changes value from 45000
//       to -20536 [-Wconstant-conversion]
//     short a = 45000;
//           ~   ^~~~~
// hw2-1.cpp:8:23: warning: implicit conversion from 'int' to 'unsigned char' changes value
//       from 1400 to 120 [-Wconstant-conversion]
//     unsigned char b = 1400;
//                   ~   ^~~~
// 2 warnings generated.
// 
// D:\GitHub\CPP_base\Lesson02>hw2-1
// a = -20536
// b = x
// 
// В переменные записали значения, которые выходят за границы допустимых
// хранимых значений, поэтому произошло переполнение.