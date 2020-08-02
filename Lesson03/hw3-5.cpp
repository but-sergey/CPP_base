#include <iostream>

using namespace std;

int ChangeUser(int user)
{
    return (user == 1) ? 2 : 1;
}

int main(int argc, char** args)
{
    int sticksCount;
    int takeCount;
    int userNum;
    
    do{
        cout << "Enter count of sticks (10 <= num <= 30): ";
        cin >> sticksCount;
    } while ((sticksCount < 10) || (sticksCount > 30));
    
    do{
        userNum = ChangeUser(userNum);
        if(userNum == 1)
        {
            do{
                cout << "USER: How much of sticks you take? >>";
                cin >> takeCount;
            } while ((takeCount < 1) || (takeCount > 3));
        }
        else
        {
            takeCount = sticksCount - ((sticksCount - 1) / 4 * 4 + 1);
            if(takeCount == 0) takeCount = 1;
            cout << "COMPUTER: I take " << takeCount << " sticks!" << endl;
        }

        sticksCount -= takeCount;
        cout << "Sticks count: " << sticksCount << endl;
    } while (sticksCount > 1);

    int winner = (sticksCount == 1) ? userNum : ChangeUser(userNum);
    cout << endl << ((winner == 1) ? "USER" : "COMPUTER") << " win!!!" << endl << endl;

    return 0;
}