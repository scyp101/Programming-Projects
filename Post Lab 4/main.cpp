#include <iostream>

using namespace std;

int main()
{
    float kilo;
    float mile;
    float ktm = 0.621; // ktm = kilo to mile

    cout << "Enter a distance" << endl;
    cin >> kilo;

    mile = kilo * ktm;

    cout << "The distance you inputed is equal to " << mile << " miles" << endl;

    return 0;
}
