#include <iostream>

using namespace std;

int main()
{
    float calories, fat, fatCalories, totalCalories, fatCaloriesP;

    cout << "Enter the amount of calories present in this food: ";
    cin >> calories;

    cout << "Enter the amount of fat grams present in this food: ";
    cin >> fat;

    if (calories >= 0 && fat >= 0) {

            fatCalories = fat * 9;
            totalCalories = fatCalories + calories;

            if (fatCalories < totalCalories) {

                fatCaloriesP = (fatCalories / totalCalories) * 100;

                cout << "Percentage of calories that come from fat is " << fatCaloriesP << "%" << endl;

                if (fatCalories <= (0.30 * totalCalories)) {
                        cout << "The food is low in fat" << endl;
                }

            }
            else {
                cout << "Error. The calories or fat grams were incorrectly entered" << endl;
            }
    }
    else {
        cout << "Error" << endl;
    }

    return 0;
}
