#include <iostream>

using namespace std;

int main()
{
    float creditMax, creditUsed, creditAvailable;

    cout << "Input the maximum amount of credits: ";
    cin >> creditMax;

    cout << "Input the amount of credit used: ";
    cin >> creditUsed;

    cout << endl;

    creditAvailable = creditMax - creditUsed;
    cout << "Total number of available credits are " << creditAvailable << endl;

    return 0;
}
