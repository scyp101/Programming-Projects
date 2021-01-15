#include <iostream>

using namespace std;

int main()
{
    const float payAmount = 1700.0;
    const float payPeriods = 26;

    float annualPay;

    annualPay = payAmount * payPeriods;

    cout << "The annual pay for the employee is $" << annualPay << endl;

    return 0;
}
