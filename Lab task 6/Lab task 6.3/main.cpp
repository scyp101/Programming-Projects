#include <iostream>

using namespace std;

int main()
{
    const int at_bat = 421;
    const int hits = 123;

    float batAvg;

    batAvg = (float)hits / (float)at_bat;

    cout << "The batting average is " << batAvg << endl;

    return 0;
}
