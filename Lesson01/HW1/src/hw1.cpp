#include "hw1.h"

int main(int argc, char** args)
{
    // Задание 2.1
    cout << "Sample string \n\t Sample string 2";
    cout << endl << "===" << endl;

    // \r - возврат в начало строки
    cout << "1\r2\r3";
    cout << endl << "===" << endl;
    
    // \t - вставка табуляции
    cout << "1\t2\t3";
    cout << endl << "===" << endl;

    // \n - перевод на новую строку
    cout << "1\n2\n3";
    cout << endl << "===" << endl;

    return 0;
}