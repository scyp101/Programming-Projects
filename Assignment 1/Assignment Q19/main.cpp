#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int minSec = 60;
    const int hourSec = 3600;
    const int daySec = 86400;

    float seconds, convertedSec;

    cout << "Enter the number of seconds: ";
    cin >> seconds;

    cout << endl;

    if (seconds >= 60 && seconds < 3600) {
            convertedSec = seconds / minSec;
            cout << seconds << " seconds are in " << setprecision(2) << fixed << convertedSec << " minutes" << endl;
    }
    else if (seconds >= 3600 && seconds < 86400) {
            convertedSec = seconds / hourSec;
            cout << seconds << " seconds are in " << setprecision(2) << fixed << convertedSec << " hours" << endl;
    }
    else if (seconds >= 86400){
            convertedSec = seconds / daySec;
            cout << seconds << " seconds are in " << setprecision(2) << fixed << convertedSec << " days" << endl;
    }

    return 0;
}
