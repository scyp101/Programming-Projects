#include <iostream>

using namespace std;

int main()
{
    const float shares = 600;
    const float sharePrice = 21.77;
    const float commissionP = 0.02;

    float stockPrice, aPrice, commission, total;

    aPrice = shares * sharePrice;

    cout << "Number of shares of stock purchased are " << shares << endl;
    cout << "Amount per share is $" << sharePrice << endl;
    cout << "Accumulated amount of all shares is $" << aPrice << endl << endl;

    commission = aPrice * commissionP;
    cout << "Amount of total commission is $" << commission << endl;

    total = aPrice + commission;
    cout << "Total amount to be paid is $" << total <<endl;

    return 0;
}
