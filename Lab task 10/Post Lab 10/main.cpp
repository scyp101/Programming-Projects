#include <iostream>

using namespace std;

int main()
{
    int numTellers, day,
        year = 0,
        total = 0;

    cout << "How many tellers worked at Nation’s Bank during each of the last three years?" << endl;
    cin >> numTellers;

    for (int m = 1; m <= numTellers; m++) {

        for (int n = 1; n <= 3; n++) {
            cout << "How many days was teller "<< m << " out sick during year " << year << "?" << endl;
            cin >> day;

            total = total + day;
            year++;
        }

        year = 1;
    }

    cout << "The " << numTellers << " tellers were out sick for a total of " << total << " days during the last three years" << endl;

    return 0;
}
