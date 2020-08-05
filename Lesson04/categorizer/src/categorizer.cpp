#include "categorizer.hpp"

using namespace std;

unsigned int histogram[256];

int main(int argc, char** args)
{
    fstream f;
    char PGM_hdr1[2];

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
            continue;
        }
        cout << "File " << args[i] << " opened" << endl;
        
        f.read(PGM_hdr1, 2);
        if((PGM_hdr1[0] != 0x50) || (PGM_hdr1[1] != 0x35))
            continue;
        cout << "PGM header detected" << endl;

        f.seekg((long int)f.tellg() + 1);

        f.close();
    }

    return 0;
}