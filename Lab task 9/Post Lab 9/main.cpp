#include <iostream>

using namespace std;

int main()
{
    int n, num,
        sum = 0;

    cout << "Enter an integer: ";
    cin >> num;

    n = num;

    do {
        sum = sum + n;
        n--;
    }
    while (n != 0);

    cout << endl;
    cout << "The sum of numbers up till " << num << " is " << sum << endl;

    return 0;
}
