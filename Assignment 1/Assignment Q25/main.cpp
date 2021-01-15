#include <iostream>

using namespace std;

int main()
{
    const float packAbill = 9.95,
                packAbillAdd = 2.00,
                hoursA = 10;

    const float packBbill = 14.95,
                packBbillAdd = 1.00,
                hoursB = 20;

    const float packCbill = 19.95;

    char packType;
    string month;
    float hoursMax, hours, bill, hoursAdd;

    cout << "What is the package the customer has purchased?" << endl;
    cout << "Type 'A' for Package A" << endl;
    cout << "Type 'B' for Package B" << endl;
    cout << "Type 'C' for Package C" << endl << endl;
    cout << "Choose package: ";
    cin >> packType;

    if (packType == 'A' || packType == 'B' || packType == 'C') {
            cout << "Choose a month you want to get bill for: ";
            cin >> month;

            if (month == "Jan" || month == "January" ||
                month == "Mar" || month == "March" ||
                month == "May" ||
                month == "Jul" || month == "July" ||
                month == "Aug" || month == "August" ||
                month == "Oct" || month == "October" ||
                month == "Dec" || month == "December") {

                    hoursMax = 744;
            }
            else if (month == "Apr" || month == "April" ||
                     month == "Jun" || month == "June" ||
                     month == "Sept" || month == "September" ||
                     month == "Nov" || month == "November") {

                    hoursMax = 720;
            }
            else if (month == "Feb" || month == "February") {

                    hoursMax = 672;
            }

            cout << "How many hours were used: ";
            cin >> hours;

            cout << endl;

            if (packType == 'A') {
                    if (hours <= hoursA) {
                        bill = packAbill;

                        cout << "Your monthly bill on Package A for " << hours << " hours is $" << bill << endl;
                    }
                    else if (hours <= hoursMax) {
                        hoursAdd = hours - hoursA;
                        bill = (hoursAdd * packAbillAdd) + packAbill;

                        cout << "Your monthly bill on Package A for " << hours << " hours (" << hoursA << " package hours + " << hoursAdd << " additional hours) is $" << bill << endl;
                    }
                    else {
                        cout << "Error, the hours you entered are incorrect" << endl;
                    }
            }
            else if (packType == 'B') {
                    if (hours <= hoursB) {
                        bill = packBbill;

                        cout << "Your monthly bill on Package B for " << hours << " hours is $" << bill << endl;
                    }
                    else if (hours <= hoursMax) {
                        hoursAdd = hours - hoursB;
                        bill = (hoursAdd * packBbillAdd) + packBbill;

                        cout << "Your monthly bill on Package B for " << hours << " hours (" << hoursB << " package hours + " << hoursAdd << " additional hours) is $" << bill << endl;
                        }
                    else {
                        cout << "Error, the hours you entered are incorrect" << endl;
                    }
            }
            else if (packType == 'C') {
                    if (hours <= hoursMax) {
                        bill = packCbill;

                        cout << "Your monthly bill on Package C for " << hours << " hours is $" << bill << endl;
                        }
                    else {
                        cout << "Error, the hours you entered are incorrect" << endl;
                    }
            }
    }
    else {
        cout << "Error, the package you entered is incorrect" << endl;
    }

    return 0;
}
