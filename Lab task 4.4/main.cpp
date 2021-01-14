#include <iostream>

using namespace std;

int main()
{
    float firstNumber;
    float secondNumber;
    float x;

    cout << "Enter the first number" << endl;
    cout << "Then hit enter" << endl;
    cin >> firstNumber;

    cout << "Enter the second number" << endl;
    cout << "Then hit enter" << endl;
    cin >> secondNumber;

    cout << "You input the numbers as " << firstNumber
         << " and " << secondNumber << endl;

    x = firstNumber;
    firstNumber = secondNumber;
    secondNumber = x;

    cout << "After swapping, the values of the two numbers are "
         << firstNumber << " and " << secondNumber << endl;

    return 0;
}
