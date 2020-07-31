#include <iostream>

using namespace std;

void print(char str[4])
{
    cout << str << endl;
}

int main(int argc, char** argv)
{
    char str1[4] = {'s', 't', 'r'};
    char str2[4] = {'s', 't'};

    print(str1);
    print(str2);

    return 0;
}

// Вывод в консоли:
// D:\GitHub\CPP_base\Lesson02>clang -o hw2-3.exe hw2-3.cpp
// 
// D:\GitHub\CPP_base\Lesson02>hw2-3
// str
// st
