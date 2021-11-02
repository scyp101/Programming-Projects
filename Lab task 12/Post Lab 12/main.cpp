#include <iostream>
#include <iomanip>

using namespace std;

typedef int INT;

float average(int temperature[], int num);
float highest(int temperature[], int num);
float lowest(int temperature[], int num);

int main()
{
    int num = 0;
    float temp = 0;

    cout << "Please input the number of temperatures to be read" << endl;
    cin >> num;

    if(num <= 50) {
        INT temperature[num];

        for(int i = 0; i < num; i++) {
            cout << "Input temperature " << i + 1 << ": " << endl;
            cin >> temp;

            temperature[i] = temp;
        }

        cout << setprecision(2) << fixed;

        cout << "The average temperature is " << average(temperature, num) << endl;
        cout << "The highest temperature is " << highest(temperature, num) << endl;
        cout << "The lowest temperature is " << lowest(temperature, num) << endl;
    }
    else {
        cout << "Error, the limit for number of temperature is 50" << endl;
    }

    return 0;
}

float average(INT temperature[], int num)
{
    float total, avg;

    for(int i = 0; i < num; i++) {
        total = total + temperature[i];
    }
    avg = total / num;

    return avg;
}

float highest(INT temperature[], int num)
{
    float high = 0;

    for(int i = 0; i < num; i++) {
        if(high < temperature[i]) {
            high = temperature[i];
        }
    }
    return high;
}

float lowest(INT temperature[], int num)
{
    float low = 0;

    low = temperature[0];
    for(int i = 0; i < num; i++) {
        if(low >= temperature[i]) {
            low = temperature[i];
        }
    }
    return low;
}
