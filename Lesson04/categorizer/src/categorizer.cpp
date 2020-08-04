#include "categorizer.hpp"

using namespace std;

int main(int argc, char** args)
{
    fstream f;

    if(argc == 1)
    {
        cout << "Please specify input file(s)!" << endl;
        return 1;
    }

    for(int i = 1; i < argc; i++)
    {
        f.open(args[i], ios::binary | ios::in);
        if(!f.is_open())
        {
            cout << "File: " << args[i] << " is not accessible!" << endl;
            return 1;
        }
        f.close();
    }

    return 0;
}