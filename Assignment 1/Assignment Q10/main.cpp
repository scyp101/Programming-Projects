#include <iostream>

using namespace std;

int main()
{
    float gasGallons, numMiles, mileage;

    cout << "Input the number of gallons of gas the car can hold: ";
    cin >> gasGallons;

    cout << "Input the miles the car can be driven on full tank: ";
    cin >> numMiles;

    mileage = numMiles / gasGallons;

    cout << endl;
    cout << "Your car has a mileage of " << mileage << " miles per gallon" << endl;

    return 0;
}
