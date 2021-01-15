#include <iostream>

using namespace std;

int main()
{
    const float percent = 0.62;

    float revenue, sales;

    cout << "Enter your revenue in millions: ";
    cin >> revenue;

    sales = revenue * percent;

    cout << "Total sales revenue for this year is " << sales << " millions" << endl;

    return 0;
}
