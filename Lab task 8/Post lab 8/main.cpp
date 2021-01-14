#include <iostream>

using namespace std;

int main()
{
    char resStatus, roomAndBoard;
    int totalBill;

    cout << "Please input \"I\" if you are in-state or \"O\" if you are out-of-state: " << endl;
    cin >> resStatus;

    cout << "Please input \"Y\" if you require room and board and \"N\" if you do not:" << endl;
    cin >> roomAndBoard;

    if (resStatus == 'I') {
            totalBill = totalBill + 3000;

            if (roomAndBoard == 'Y') {
                totalBill = totalBill + 2500;
            }
        cout << "Your total bill for this semester is $" << totalBill << endl;
    }
    else if (resStatus == 'O') {
            totalBill = totalBill + 4500;

            if (roomAndBoard == 'Y') {
                totalBill = totalBill + 3500;
            }
        cout << "Your total bill for this semester is $" << totalBill << endl;
    }

    return 0;
}
