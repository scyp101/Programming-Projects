#include <iostream>

using namespace std;

int main()
{
    char grade;

    cout << "What grade did you earn in Programming I?" << endl;
    cin >> grade;

    if (grade == 'A') {
        cout << "YOU PASSED!" << endl;
    }
    else if (grade == 'B') {
        cout << "YOU PASSED!" << endl;
    }
    else if (grade == 'C') {
        cout << "YOU PASSED!" << endl;
    }
    else if (grade == 'D') {
        cout << "YOU PASSED!" << endl;
    }

    if (grade == 'A') {
        cout << "an A - excellent work !" << endl;
    }
    else if (grade == 'B') {
        cout << "You got a B - good job" << endl;
    }
    else if (grade == 'C') {
        cout << "Earning a C is satisfactory" << endl;
    }
    else if (grade == 'D') {
        cout << "While D is passing, there is a problem" << endl;
    }
    else if (grade == 'E') {
        cout << "You failed - better luck next time" << endl;
    }
    else {
        cout << "You did not enter an A, B, C, D, or F" << endl;
    }

}
