#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float valueAssessedP = 0.6,
                valueExempt = 5000,
                assessedTaxPer = 100,
                partitionTax = 4;

    float valueActual, valueAssessed, taxRate, exempt, propertyTax, quarterTax;

    cout << "Enter the actual value of the property: ";
    cin >> valueActual;

    cout << "Enter the current tax rate: ";
    cin >> taxRate;

    valueAssessed = valueActual * valueAssessedP;
    exempt = valueAssessed - valueExempt;
    propertyTax = (exempt / assessedTaxPer) * taxRate;
    quarterTax = propertyTax / partitionTax;

    cout << endl;
    cout << setprecision(2) << fixed;

    cout << setw(50) << left << "Actual value of the property: " << "$" << valueActual << endl;
    cout << setw(50) << left << "Assessed value of the property: " << "$" << valueAssessed << endl;
    cout << setw(50) << left << "Value the senior citizens have to pay tax on: " << "$" << exempt << endl;
    cout << setw(50) << left << "Annual property tax: " << "$" << propertyTax << endl;
    cout << setw(50) << left << "Quarterly property tax: " << "$" << quarterTax << endl;

    return 0;
}
