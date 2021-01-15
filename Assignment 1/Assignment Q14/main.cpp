#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float weight = 9.2;

    float withoutWeight, withWeight, widgetsWeight, numWidgets;

    cout << "What is the weight of pallet without widgets stacked on it? (In pounds)" << endl;
    cin >> withoutWeight;

    cout << "What is the weight of pallet with widgets stacked on it? (In pounds)" << endl;
    cin >> withWeight;

    widgetsWeight = withWeight - withoutWeight;
    numWidgets = widgetsWeight / weight;

    cout << setprecision(0) << fixed;

    cout << "Number of widgets stacked on the pallet are " << numWidgets << endl;

    return 0;
}
