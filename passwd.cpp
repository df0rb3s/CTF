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
		system("pause");
    }
    else
    {
        cout << "Sorry, only 10 attempts allowed." << endl;
		system("pause");
    }

return 0;
}
