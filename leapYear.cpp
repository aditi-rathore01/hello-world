// Write a program to check whether a year entered by a user is Leap year or not.
#include <iostream>
using namespace std;

int main()
{
    int month;
    cout << "enter the year" << endl;
    cin >> month;
    if (month % 4 == 0)
    {
        cout << month << " is a leap year";
    }
    else
    {
        cout << month << " is not a leap year" << endl;
    }

    return 0;
}