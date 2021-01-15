#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float speedCD = 258.0;
    const float speedAir = 331.5;
    const float speedHelium = 972.0;
    const float speedHydrogen = 1270.0;

    int sno;
    float time, distance;

    cout << "Choose a medium by typing their Sno accordingly" << endl;

    cout << setprecision(1) << fixed;

    cout << setw(10) << left << "Sno";
    cout << setw(25) << left << "Medium" << "Speed (Meters per Second)" << endl;

    cout << "-------------------------------------------------------------" << endl;

    cout << setw(10) << left << "1";
    cout << setw(25) << left << "Carbon Dioxide" << speedCD << endl;

    cout << setw(10) << left << "2";
    cout << setw(25) << left << "Air" << speedAir << endl;

    cout << setw(10) << left << "3";
    cout << setw(25) << left << "Helium" << speedHelium << endl;

    cout << setw(10) << left << "4";
    cout << setw(25) << left << "Hydrogen" << speedHydrogen << endl << endl;

    cout << setprecision(0) << fixed;

    cin >> sno;

    if (sno == 1) {
            cout << "Enter the number of seconds it took for the sound to travel in this medium from its source to the location at which it was detected: ";
            cin >> time;

            cout << endl;

            if (time >= 0 || time <= 30) {
                    distance = speedCD * time;

                    cout << "The source of the sound from the detection location was " << distance << " meters away" << endl;
            }
            else {
                cout << "Error" << endl;
            }
    }
    else if (sno == 2) {
            cout << "Enter the number of seconds it took for the sound to travel in this medium from its source to the location at which it was detected: ";
            cin >> time;

            cout << endl;

            if (time >= 0 || time <= 30) {
                    distance = speedAir * time;

                    cout << "The source of the sound from the detection location was " << distance << " meters away" << endl;
            }
            else {
                    cout << "Error" << endl;
            }
    }
    else if (sno == 3) {
            cout << "Enter the number of seconds it took for the sound to travel in this medium from its source to the location at which it was detected: ";
            cin >> time;

            cout << endl;

            if (time >= 0 || time <= 30) {
                    distance = speedHelium * time;

                    cout << "The source of the sound from the detection location was " << distance << " meters away" << endl;
            }
            else {
                cout << "Error" << endl;
            }
    }
    else if (sno == 4) {
            cout << "Enter the number of seconds it took for the sound to travel in this medium from its source to the location at which it was detected: ";
            cin >> time;

            cout << endl;

            if (time >= 0 || time <= 30) {
                    distance = speedHydrogen * time;

                    cout << "The source of the sound from the detection location was " << distance << " meters away" << endl;
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
