#include <iostream>

using namespace std;

int main()
{
    int numOfBooks;

    cout << "Enter the number of books purchased this month: ";
    cin >> numOfBooks;

    cout << endl;

    if (numOfBooks == 0) {
        cout << "You have earned 0 points" << endl;
    }
    else if (numOfBooks == 1) {
        cout << "You have earned 5 points" << endl;
    }
    else if (numOfBooks == 2) {
        cout << "You have earned 15 points" << endl;
    }
    else if (numOfBooks == 3) {
        cout << "You have earned 30 points" << endl;
    }
    else if (numOfBooks >= 4) {
        cout << "You have earned 60 points" << endl;
    }

    return 0;
}
