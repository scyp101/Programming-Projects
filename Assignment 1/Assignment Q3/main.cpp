#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float taxP = 0.0675;
    const float tipP = 0.15;

     float charge, tax, afterTax, yourTip;

    cout << "Input your meal charges: ";
    cin >> charge;

    tax = charge * taxP;
    afterTax = charge + tax;
    yourTip = afterTax * tipP;

    cout << setprecision(2) << fixed << endl;

    cout << "Your meal charges are $" << charge << endl;
    cout << "Your tax is $" << tax << endl;
    cout << "Your tip is $" << yourTip << endl;

    return 0;
}
