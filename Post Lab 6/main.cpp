#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int perpendicular, base;
    float sqSum, hypotenuse;

    cout << "Please input the perpendicular and base of triangle" << endl;
    cin >> perpendicular;
    cin >> base;

    cout << "The sides of the right triangle are " << perpendicular << " and " << base << endl;

    sqSum = pow(perpendicular, 2) + pow(base, 2);
    hypotenuse = sqrt(sqSum);

    cout << setprecision(3);

    cout << "The hypotenuse is " << hypotenuse << endl;

    return 0;
}
