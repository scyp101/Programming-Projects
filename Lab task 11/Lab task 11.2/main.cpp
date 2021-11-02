#include <iostream>
#include <string>

using namespace std;

void writeProverb(string);

string word;

int main ()
{

    cout << "Given the phrase:" << endl;
    cout << "Now is the time for all good men to come to the aid of their ___" << endl << endl;
    cout << "Please input the word you would like to have finish the proverb: ";
    cin >> word;

    cout << endl;

    writeProverb(word);

    return 0;
}

void writeProverb(string word)
{
    cout << "Now is the time for all good men to come to the aid of their " << word << endl;
}
