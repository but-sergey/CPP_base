#include "categorizer.hpp"

using namespace std;

unsigned int histogram[256];
int alphabet[256];

int main(int argc, char** args)
{
    fstream f;
    int width, height;
    width = height = 0;
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

        f.seekg(static_cast<unsigned int>(f.tellg()) + 1);
        
        unsigned int digit_b = static_cast<unsigned int>(f.tellg());
        char sym;
        do{
            f.read(&sym, 1);
        } while(sym != 0x20);
        unsigned int digit_e = static_cast<unsigned int>(f.tellg()) - 2;

        int j = 0;
        int c = 1;

        for(int d = '0'; d <= '9'; d++, j++)
            alphabet[d] = j;

        for(j = digit_e; j >= digit_b; j--, c *= 10)
        {
            f.seekg(j);
            f.read(&sym, 1);
            width += alphabet[sym] * c;
        }
        cout << "Width = " << width << endl;
 
        digit_b = static_cast<unsigned int>(f.tellg()) + 1;
        do{
            f.read(&sym, 1);
        } while(sym != 0x0A);
        digit_e = static_cast<unsigned int>(f.tellg()) - 2;

        for(j = digit_e, c = 1; j >= digit_b; j--, c *= 10)
        {
            f.seekg(j);
            f.read(&sym, 1);
            height += alphabet[sym] * c;
        }
        cout << "Height = " << height << endl;
 
        f.close();
    }

    return 0;
}