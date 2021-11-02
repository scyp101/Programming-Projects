#include <iostream>

using namespace std;

float avgArray(int userNums[], int SIZE);

int main()
{
    const int SIZE = 10;
    int userNums[SIZE];

    cout << "Enter 10 numbers: " << endl;

    for (int count = 0; count < SIZE; count++) {
        cout << "#" << (count + 1) << " ";
        cin >> userNums[count];
    }

    cout << endl;
    cout << "The average of those numbers is ";
    cout << avgArray(userNums, SIZE) << endl;

    return 0;
}

float avgArray(int userNums[], int SIZE)
{
    float sum, avg;

    for (int i = 0; i < SIZE; i++) {
        sum = sum + userNums[i];
    }

    avg = sum / SIZE;

    return avg;
}
