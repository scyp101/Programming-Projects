#include <iostream>

using namespace std;

int main()
{
    const int length = 8;
    const int width = 3;

    float area;
    float perimeter;

    perimeter = 2 * length + 2 * width;

    area = length * width;

    cout << "The perimeter of rectangle is " << perimeter;

cout << endl;

    cout << "The area of rectangle is " << area << endl;

    return 0;
}
