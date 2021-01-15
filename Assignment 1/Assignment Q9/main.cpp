#include <iostream>

using namespace std;

int main()
{
    float amountSale, saleRate, amountTax, total;

    cout << "What is the sale tax rate (If the sales tax rate is 6%, enter 0.06): ";
    cin >> saleRate;

    cout << "What is your amount of sale: ";
    cin >> amountSale;

    amountTax = amountSale * saleRate;
    total = amountSale + amountTax;
    cout << endl;
    cout << "The amount of sale is $" << amountTax << " and the total with sales tax included is $" << total << endl;

    return 0;
}
