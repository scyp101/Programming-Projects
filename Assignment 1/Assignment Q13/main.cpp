#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float grossProfitP = 0.20;
    const float adultTicketPrice = 6;
    const float childTicketPrice = 3;

    string movieName;
    float adultTickets, childTickets, grossProfit, netProfit, amountDistributor;

    cout << "Enter the name of the movie: ";
    getline(cin, movieName);

    cout << "How many adult tickets were sold: ";
    cin >> adultTickets;

    cout << "How many child tickets were sold: ";
    cin >> childTickets;

    grossProfit = (adultTickets * adultTicketPrice) + (childTickets * childTicketPrice);
    netProfit = grossProfit * grossProfitP;
    amountDistributor = grossProfit - netProfit;

    cout << endl;

    cout << "Movie Name: " << setw(20) << "\"" << movieName << "\"" << endl;
    cout << "Adult Tickets Sold: " << setw(14) << adultTickets << endl;
    cout << "Child Tickets Sold: " << setw(14) << childTickets << endl;

    cout << setprecision(2) << fixed;

    cout << "Gross Box Office Profit: " << setw(7) << "$" << grossProfit << endl;
    cout << "Net Box Office Profit: " << setw(9) << "$" << netProfit << endl;
    cout << "Amount Paid to Distributor: " << setw(4) << "$" << amountDistributor << endl;

    return 0;
}
