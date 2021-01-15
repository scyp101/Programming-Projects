#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float item1 = 12.95;
    const float item2 = 24.95;
    const float item3 = 6.95;
    const float item4 = 14.95;
    const float item5 = 3.95;
    const float tax = 0.06;

    float subTotal, salesTax, total;

    cout << "Price of item 1 is $12.95" << endl;
    cout << "Price of item 2 is $24.95" << endl;
    cout << "Price of item 3 is $6.95" << endl;
    cout << "Price of item 4 is $14.95" << endl;
    cout << "Price of item 5 is $3.95" << endl << endl;

    subTotal = item1 + item2 + item3 + item4 + item5;
    salesTax = subTotal * tax;
    total = salesTax + subTotal;

    cout << setprecision(2) << fixed;

    cout << "Subtotal of the sale is $" << subTotal << endl;
    cout << "Amount of sales tax is $" << salesTax << endl;
    cout << "The total is $" << total << endl;

    return 0;
}
