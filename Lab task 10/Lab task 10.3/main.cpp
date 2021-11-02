#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int beverage = 0,
        coffee = 0,
        tea = 0,
        coke = 0,
        orangeJuice = 0,
        peopleSurvey = 0;

    while (beverage != -1) {

            cout << "Please input the favorite beverage of person #1: Choose 1, 2, 3, or 4 from the above menu or -1 to exit the program" << endl;
            cin >> beverage;

            switch (beverage) {
                case 1:
                    coffee++;
                    break;

                case 2:
                    tea++;
                    break;

                case 3:
                    coke++;
                    break;

                case 4:
                    orangeJuice++;
                    break;
            }

            peopleSurvey++;
    }

    cout << "The total number of people surveyed is " << peopleSurvey -1
         << ". The results are as follows: " << endl;

    cout << "Beverage Number of Votes" << endl << endl;

    cout << setw(18) << left << "Beverage" << "Number of Votes" << endl;
    cout << "*********************************" << endl;
    cout << setw(18) << left << "Coffee" << coffee << endl;
    cout << setw(18) << left << "Tea" << tea << endl;
    cout << setw(18) << left << "Coke" << coke << endl;
    cout << setw(18) << left << "Orange Juice" << orangeJuice << endl;

    return 0;
}
