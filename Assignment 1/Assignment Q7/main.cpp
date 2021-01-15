#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float numOfCustomers = 12467;
    const float firstP = 0.14;
    const float secondP = 0.64;

    float drinkCustomers, citrusCustomers;

    cout << setprecision(0) << fixed;

    drinkCustomers = numOfCustomers * firstP;
    cout << "Number of customers who purchase one or more energy drinks per week are " << drinkCustomers << endl;

    citrusCustomers = drinkCustomers * secondP;
    cout << "Number of customers who prefer citrus flavored energy drinks are " << citrusCustomers << endl;

    return 0;
}
