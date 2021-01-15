#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float countyTaxP = 0.02;
    const float stateTaxP = 0.04;

    string month;
    int year;
    float sales, productSales, countyTax, stateTax, totalTax;

    cout << "Enter a month: ";
    cin >> month;

    cout << "Enter the year: ";
    cin >> year;

    cout << "Enter the total amount collected at the cash register: ";
    cin >> sales;

    cout << endl;

    productSales = sales / 1.06;
    countyTax = productSales * countyTaxP;
    stateTax = productSales * stateTaxP;
    totalTax = countyTax + stateTax;

    cout << setw(32) << left << "Month: " << month << endl;

    cout << setprecision(2) << fixed << showpoint;
    cout << "--------------------------------------------" << endl;

    cout << setw(32) << "Total Collected: " << "$" << sales << endl;
    cout << setw(32) << "Sales: " << "$" << productSales << endl;
    cout << setw(32) << "County Sales Tax: " << "$" << countyTax << endl;
    cout << setw(32) << "State Sales Tax: " << "$" << stateTax << endl;
    cout << setw(32) << "Total Sales Tax: " << "$" << totalTax << endl;

    return 0;
}
