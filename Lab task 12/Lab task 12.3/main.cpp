#include <iostream>

using namespace std;

int main()
{
    const int num = 10;
    int id[num];
    double pay[num];

    for(int i = 0; i < num; i++) {
        cout << "Enter identification number of employee " << i + 1<< ": ";
        cin >> id[i];

        cout << "Enter weekly gross pay of employee " << i + 1 << ": ";
        cin >> pay[i];

        cout << endl;
    }

    for(int j = 0; j < num; j++) {
        cout << "Employee " << id[j] << ": $" << pay[j] << endl;
    }

    return 0;
}
