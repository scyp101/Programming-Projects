#include <iostream>

using namespace std;

void swapFunction(float, float);

float first, second;

int main()
{

    cout << "Enter the first number then hit enter: ";
    cin >> first;

    cout << "Enter the second number then hit enter: ";
    cin >> second;

    swapFunction(first, second);

    return 0;
}

void swapFunction(float number1, float number2)
{
    float x;

    cout << endl;
    cout << "You input the numbers as " << number1 << " and " << number2 << endl << endl;

    x = number1;
    number1 = number2;
    number2 = x;

    cout << "After swapping, the first number has the value of " << number1 << " which was the value of the second number" << endl;
    cout << "The second number has the value of " << number2 << " which was the value of the first number" << endl;
}

