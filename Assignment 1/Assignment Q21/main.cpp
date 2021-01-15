#include <iostream>

using namespace std;

int main()
{
    float weight, distance, rate;

    cout << "Input the weight of the package: ";
    cin >> weight;

    cout << "Input the distance it needs to be shipped: ";
    cin >> distance;

    cout << endl;

    if (weight > 0 && weight <= 2) {
            if (distance >= 10 && distance <= 3000) {
                rate = (distance * 1.10) / 500;
                cout << "Estimated rate for weight " << weight << " kg to be shipped a distance of " << distance << " miles is $" << rate << endl;
            }
            else {
                cout << "Error" << endl;
            }
    }
    else if (weight > 2 && weight <= 6) {
            if (distance >= 10 && distance <= 3000) {
                rate = (distance * 2.20) / 500;
                cout << "Estimated rate for weight " << weight << " kg to be shipped a distance of " << distance << " miles is $" << rate << endl;
            }
            else {
                cout << "Error" << endl;
            }
    }
    else if (weight > 6 && weight <= 10) {
            if (distance >= 10 && distance <= 3000) {
                rate = (distance * 3.70) / 500;
                cout << "Estimated rate for weight " << weight << " kg to be shipped a distance of " << distance << " miles is $" << rate << endl;
            }
            else {
                cout << "Error" << endl;
            }
    }
    else if (weight > 10 && weight <= 20) {
            if (distance >= 10 && distance <= 3000) {
                rate = (distance * 4.80) / 500;
                cout << "Estimated rate for weight " << weight << " kg to be shipped a distance of " << distance << " miles is $" << rate << endl;
            }
            else {
                cout << "Error" << endl;
            }
    }
    else {
        cout << "Error" << endl;
    }

    return 0;
}
