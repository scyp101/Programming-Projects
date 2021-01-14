#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float sum, quarter, average;

    cout << "Please input your water bill for quarter 1: " << endl;
    cin >> quarter;
    sum = sum + quarter;

    cout << "Please input your water bill for quarter 2: " << endl;
    cin >> quarter;
    sum = sum + quarter;

    cout << "Please input your water bill for quarter 3: " << endl;
    cin >> quarter;
    sum = sum + quarter;

    cout << "Please input your water bill for quarter 4: " << endl;
    cin >> quarter;
    sum = sum + quarter;

    average = sum / 12;

    cout << setprecision(2) << fixed << showpoint;

    if (average > 75) {
        cout << "Your average monthly bill is $" << average;
        cout << ". You are using excessive amounts of water." << endl;
    }
    else if (average >= 25 && average < 75) {
        cout << "Your average monthly bill is $" << average;
        cout << ". You are using a typical amount of water." << endl;
    }
    else if (average < 25) {
        cout << "Your average monthly bill is $" << average;
        cout << ". You are conserving water, good job!." << endl;
    }

    return 0;
}
