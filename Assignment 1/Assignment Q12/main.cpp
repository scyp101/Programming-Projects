#include <iostream>

using namespace std;

int main()
{
    string month1, month2, month3;
    float amount1, amount2, amount3, average;

    cout << "Enter the name of first month: ";
    cin >> month1;
    cout << "Enter the amount of rainfall (in inches): ";
    cin >> amount1;
    cout << endl;

    cout << "Enter the name of second month: ";
    cin >> month2;
    cout << "Enter the amount of rainfall (in inches): ";
    cin >> amount2;
    cout << endl;

    cout << "Enter the name of third month: ";
    cin >> month3;
    cout << "Enter the amount of rainfall (in inches): ";
    cin >> amount3;
    cout << endl;

    average = (amount1 + amount2 + amount3) / 3;

    cout << "The average rainfall for months " << month1 << ", " << month2 << ", and " <<  month3 << " is " << average << " inches" << endl;

    return 0;
}
