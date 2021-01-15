#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float A = 15;
	const float B = 12;
	const float C = 9;

	float ticketsA, ticketsB, ticketsC, total;

    cout << "Enter how many class A tickets were sold: ";
    cin >> ticketsA;

    cout << "Enter how many class B tickets were sold: ";
    cin >> ticketsB;

    cout << "Enter how many class C tickets were sold: ";
    cin >> ticketsC;

    total = (A * ticketsA) + (B * ticketsB) + (C * ticketsC);

    cout << setprecision(2) << fixed << endl;;

    cout << "The total amount of income generated is $" << total << endl;

    return 0;
}
