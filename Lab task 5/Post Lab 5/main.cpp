#include <iostream>
#include <string>

using namespace std;


int main()
{
    const string favoriteSoda = "Dr. Dolittle";
    const char bestRating = 'A';

    char rating;
    string favoriteSnack;
    int numberOfPeople;
    int topChoiceTotal;

    favoriteSnack = "crackers";
    rating = 'B';
    numberOfPeople = 250;
    topChoiceTotal = 148;

    cout << "The preferred soda is " << favoriteSoda << endl;

    cout << "The preferred snack is " << favoriteSnack << endl;

    cout << "Out of " << numberOfPeople << " people " << topChoiceTotal << " chose these items!" << endl;

    cout << "Each of these products were given a rating of " << bestRating;
    cout << " from our expert tasters" << endl;

    cout << "The other products were rated no higher than a " << rating << endl;

    return 0;
}
