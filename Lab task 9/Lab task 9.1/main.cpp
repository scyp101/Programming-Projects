#include <iostream>

using namespace std;

int main() {
    char letter = 'a';

    do {
            cout << "Please enter a letter (Enter 'x' to abort program)" << endl;
            cin >> letter;

            cout << "The letter you entered is " << letter << endl;
    }
    while (letter != 'x');

    return 0;
}
