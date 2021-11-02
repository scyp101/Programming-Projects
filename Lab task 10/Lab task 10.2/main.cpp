#include <iostream>

using namespace std;

int main()
{
    int numStudents, student, n, day = 0;
    float hourBiology, hourProgramming, totalBio, totalPro,
          averageBio, averagePro;

    cout << "This program will find the average number of hours a day"
         << " that a student spent programming over a long weekend\n\n";

    cout << "How many students are there?" << endl;
    cin >> numStudents;

    cout << "Enter the number of days in the long weekend" << endl;
    cin >> n;

    for (student = 1; student <= numStudents; student++) {
            totalBio = 0;
            totalPro = 0;

            for (day = 1; day <= n; day++) {
                    cout << "Please enter the number of hours student " << student << " studies Biology on day " << day << "." << endl;
                    cin >> hourBiology;

                    cout << "Please enter the number of hours student " << student << " studies Programming on day " << day << "." << endl;
                    cin >> hourProgramming;

                    totalBio = totalBio + hourBiology;
                    totalPro = totalPro + hourProgramming;
            }

            averageBio = totalBio / numStudents;
            averagePro = totalPro / numStudents;

            if (averageBio < averagePro) {
                    cout << endl;
                    cout << "The average number of hours per day spent studying Programming by student "
                         << student << " is " << averagePro << endl << endl << endl;
            }
            else if (averagePro < averageBio) {
                    cout << endl;
                    cout << "The average number of hours per day spent studying Biology by student "
                         << student << " is " << averageBio << endl << endl << endl;
            }
            else {
                    cout << endl;
                    cout << "The average number of hours per day spent studying Programming and Biology by student "
                         << student << " are the same which are " << averageBio << endl << endl << endl;
            }
    }

    return 0;
}
