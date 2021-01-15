#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    const float areaSlice = 14.125;

    float diameter, radius, area, numOfSlices;

    cout << "Enter the diameter of the pizza in inches: ";
    cin >> diameter;

    radius = diameter / 2;

    area = 3.142 * pow(radius, 2);
    numOfSlices = area / areaSlice;

    cout << setprecision(1) << fixed << endl;

    cout << "Number of slices that may be taken form the pizza are " << numOfSlices << endl;

    return 0;
}
