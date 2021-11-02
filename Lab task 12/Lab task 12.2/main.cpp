#include <iostream>

using namespace std;

int main()
{
    const int num = 10;
    int salary[num];
    int largest = 0,
        largesti = 0,
        smallest = 0,
        smallestj = 0,
        sum = 0;

    float avg;

    cout << "Enter salaries of " << num << " employees: " << endl;

    for(int i = 0; i < num; i++) {
        cout << "Employee " << i + 1 << " = ";
        cin >> salary[i];
    }

    for(int i = 0; i < num; i++) {
        if (largest < salary[i]) {
            largest = salary[i];
            largesti = i + 1;
        }
    }

    smallest = salary[0];
    for(int j = 0; j < num; j++) {
        if (smallest >= salary[j]) {
            smallest = salary[j];
            smallestj = j + 1;
        }
    }

    for(int i = 0; i < num; i++) {
        sum += salary[i];
    }

    avg = (float)sum / num;

    cout << endl;
    cout << "The average salaries of all the employees is $" << avg << endl;
    cout << "The highest salary of $" << largest << " has been awarded to employee " << largesti << endl;
    cout << "The lowest salary of $" << smallest << " has been awarded to employee " << smallestj << endl;

    return 0;
}
