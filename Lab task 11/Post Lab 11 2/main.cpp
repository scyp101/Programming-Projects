#include <iostream>

using namespace std;

const float kilConst = 1.61;
const float milConst = 0.621;

float milesToKilo(float);
float kiloToMiles(float);

float num, milToKil, kilToMil, convertedKil, convertedMil;

int main()
{
    do {
        cout << "Please input" << endl;
        cout << "1 Convert miles to kilometers" << endl;
        cout << "2 Convert kilometers to miles" << endl;
        cout << "3 Quit" << endl;
        cin >> num;

        cout << endl;

        if (num == 1) {
            cout << "Please input the miles to be converted: ";
            cin >> milToKil;

            convertedKil = milesToKilo(milToKil);

            cout << milToKil << " miles = " << convertedKil << " kilometers" << endl << endl;
        }
        else if (num == 2) {
            cout << "Please input the kilometers to be converted: ";
            cin >> kilToMil;

            convertedMil = kiloToMiles(kilToMil);

            cout << kilToMil << " kilometers = " << convertedMil << " miles" << endl << endl;
        }
    }
    while (num != 3);

    cout << "You have quitted the program" << endl;

    return 0;
}

float milesToKilo(float milToKil)
{
    return milToKil * kilConst;
}

float kiloToMiles(float kilToMil)
{
    return kilToMil * milConst;
}
