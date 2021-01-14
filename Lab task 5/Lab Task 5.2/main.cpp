#include <iostream>

using namespace std;

int main()
{
    const double Pi = 3.14;
    const double Radius = 5.4;

    float area;
    float circumference;

    circumference = 2 * Pi * Radius;

    area = Pi * Radius * Radius;

    cout << "The circumference of circle is " << circumference << endl;

    cout << "The area of circle is " << area << endl;

    return 0;
}
