#include <stdafx.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string pass = "NovettaCSD";
    string input;
    int attempts = 1;
    cout << "Guess the password: ";
    cin >> input;

    while ( input != pass && attempts <= 10)
    {
        cout << "Please try again." << endl;
        cin >> input;
        attempts++;
    }
    if (pass == input && attempts <=9)
    {
        cout << "Good Work!" << endl;
    }
    else
    {
        cout << "Sorry, only 10 attempts allowed." << endl;
    }
    do
    {
    cout << '\n' << "Press the enter key to continue...";
    }
    while(cin.get() != '\n');

return 0;
}
