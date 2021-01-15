#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float yenExchange = 103.84;
    const float euroExchange = 0.82;

    float dollar, yen, euros;

    cout << "Input your amount in dollars: ";
    cin >> dollar;

    yen = dollar * yenExchange;
    euros = dollar * euroExchange;

    cout << setprecision(2) << fixed << showpoint;

    cout << dollar << " Dollars = " << yen << " Yen" << endl;
    cout << dollar << " Dollars = " << euros << " Euros" << endl;

    return 0;
}
