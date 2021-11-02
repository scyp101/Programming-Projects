#include <iostream>

using namespace std;

int main()
{
    int sValue, eValue;
    int total;
    int number;
    float mean;

    cout << "Please enter a starting positive integer: ";
    cin >> sValue;

    cout << "Please enter a ending positive integer: ";
    cin >> eValue;

    cout << endl;

    if (sValue > 0) {

            for (number = sValue; number <= eValue; number++) {

                total = total + number;
            }

            mean = static_cast<float>(total) / ((eValue + 1) - sValue);

            cout << "The mean average of the numbers from " << sValue << " to "
                 << eValue << " is " << mean << endl;
    }
    else {
            cout << "Invalid input - integer must be positive" << endl;
    }

    return 0;
}
