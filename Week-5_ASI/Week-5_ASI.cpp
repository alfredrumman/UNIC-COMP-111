// Week-5_ASI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    char i;
    cin >> i;

    if (i == 'd' || i == 'D') {
        cout << "Want the dog to be neutered Y/N: ";
        char answer;
        cin >> answer;
        if (answer == 'Y') {
            cout << "A dog that has been neutered costs 50 Euros." << endl;
        }
        else {
            cout << "A dog that has not been neutered costs 80 Euros." << endl;
        }
    }
    else if (i == 'c' || i == 'C') {
        cout << "Want the cat to be neutered Y/N: ";

        char answer;
        cin >> answer;
        if (answer == 'Y') {
            cout << "A cat that has been neutered costs 40 Euros." << endl;
        }
        else {
            cout << "A cat that has not been neutered costs 60 Euros." << endl;
        }
    }
    else if ((i == 'b' || i == 'B') || (i == 'r' || i == 'R')) {
        cout << "A bird or reptile costs 10 Euros." << endl;
    }
    else {
        cout << "Any other animal generates an error message." << endl;
    }

    return 0;
}
