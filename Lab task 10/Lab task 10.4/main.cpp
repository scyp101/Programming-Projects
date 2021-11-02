#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float g = 9.8;

    float time, height, distance;

    cout << "Please input the time of fall in seconds:" << endl;
    cin >> time;

    cout << "Please input the height of the bridge in meters:" << endl;
    cin >> height;

    cout << endl;
    cout << setw(30) << left << "Time Falling (seconds)"
         << "Distance Fallen (meters)" << endl;
    cout << "******************************************************" << endl;

    for (int n = 0; n <= time; n++) {
        distance = 0.5 * g * n * n;

        cout << setw(30) << left << n << distance << endl;
    }

    if (distance > height) {
        cout << endl;
        cout << "Warning-Bad Data: The distance fallen exceeds the height of the bridge" << endl;
    }

    return 0;
}
