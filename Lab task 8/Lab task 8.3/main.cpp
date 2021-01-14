#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int shirtNumber;
    float retail = 12, totalCost;

    cout << "How many shirts would you like?" << endl;
    cin >> shirtNumber;

    cout << setprecision(2) << fixed;

    if (shirtNumber >= 0 && shirtNumber <= 4) {
        totalCost = shirtNumber * retail;
        cout << "The cost per shirt is $" << retail << " and the total cost is $" << totalCost << endl;
    }
    else if (shirtNumber >= 5 && shirtNumber <= 10) {
        retail = retail * 0.9;
        totalCost = shirtNumber * retail;
        cout << "The cost per shirt is $" << retail << " and the total cost is $" << totalCost << endl;
    }
    else if (shirtNumber >= 11 && shirtNumber <= 20) {
        retail = retail * 0.85;
        totalCost = shirtNumber * retail;
        cout << "The cost per shirt is $" << retail << " and the total cost is $" << totalCost << endl;
    }
    else if (shirtNumber >= 21 && shirtNumber <= 30) {
        retail = retail * 0.8;
        totalCost = shirtNumber * retail;
        cout << "The cost per shirt is $" << retail << " and the total cost is $" << totalCost << endl;
    }
    else if (shirtNumber >= 31) {
        retail = retail * 0.75;
        totalCost = shirtNumber * retail;
        cout << "The cost per shirt is $" << retail << " and the total cost is $" << totalCost << endl;
    }
    else {
        cout << "Invalid input. Please enter a non-negative integer" << endl;
    }

    return 0;
}
