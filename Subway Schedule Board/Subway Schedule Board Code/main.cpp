#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

void subwayMap();
float table(int num, int destination, int platform, int arrival);

int main()
{
    const int numPassengers = 10;
    int track[5][2];
    char pDepart, pArrive;
    int platform;
    int pDeparture[numPassengers];
    int pArrival[numPassengers];

    subwayMap();

    cout << endl;

    srand(time(0));

    for(int i = 0; i < numPassengers; i++) {
        pDeparture[i] = (rand() % 5) + 1;
    }

    for(int i = 0; i < numPassengers; i++) {
        do {
            pArrival[i] = (rand() % 5) + 1;
        }
        while(pDeparture[i] == pArrival[i]);
    }

    do {
        cout << "Please select your departing station: ";
        cin >> pDepart;

        if(pDepart != 'A' && pDepart != 'B' && pDepart != 'C' && pDepart != 'D' && pDepart != 'E'){
            cout << "Incorrect selection, please enter again" << endl;
        }
    }
    while(pDepart != 'A' && pDepart != 'B' && pDepart != 'C' && pDepart != 'D' && pDepart != 'E');

    cout << endl;

    do {
        cout << "Please select your arriving station: ";
        cin >> pArrive;

        if(pDepart != 'A' && pDepart != 'B' && pDepart != 'C' && pDepart != 'D' && pDepart != 'E'){
            cout << "Incorrect selection, please enter again" << endl;
        }
    }

    while(pArrive != 'A' && pArrive != 'B' && pArrive != 'C' && pArrive != 'D' && pArrive != 'E');

    switch(pDepart){
        case 'A':
            pDeparture[0] = 1;
            break;
        case 'B':
            pDeparture[0] = 2;
            break;
        case 'C':
            pDeparture[0] = 3;
            break;
        case 'D':
            pDeparture[0] = 4;
            break;
        case 'E':
            pDeparture[0] = 5;
            break;
    }

    switch(pArrive){
        case 'A':
            pArrival[0] = 1;
            break;
        case 'B':
            pArrival[0] = 2;
            break;
        case 'C':
            pArrival[0] = 3;
            break;
        case 'D':
            pArrival[0] = 4;
            break;
        case 'E':
            pArrival[0] = 5;
            break;
    }

    for(int i = 0; i < 5; i++) {
        track[i][0] = (rand() % 2) + 1;

        if(track[i][0] == 1) {
            track[i][0] = 0;
        }
        else if (track[i][0] == 2) {
            track[i][0] = 1;
        }

        if(track[i][0] == 0) {
            track[i][1] = 1;
        }
        else if(track[i][0] == 1) {
            track[i][1] = 0;
        }
    }

    cout << "  _________________________________________________________________________________________________ " << endl;
    cout << setw(20) << left << " |Passenger no."
         << setw(30) << left << " Departure from station"
         << setw(26) << left << " Departure platform"
         << setw(29) << left << " Arrival to destination|" << endl;

    for(int i = 0; i < numPassengers; i++) {
        if(pDeparture[i] == 1 && pArrival[i] == 2) {
            if(track[i][0] == 1){
                platform = 1;
            }
            else if(track[i][1] == 1){
                platform = 2;
            }
            table(i, pDeparture[i], platform, pArrival[i]);
        }
        if(pDeparture[i] == 1 && pArrival[i] == 3) {
            if(track[i][0] == 1){
                platform = 1;
            }
            else if(track[i][1] == 1){
                platform = 2;
            }
            table(i, pDeparture[i], platform, pArrival[i]);
        }
        if(pDeparture[i] == 1 && pArrival[i] == 4) {
            if(track[i][0] == 1){
                platform = 1;
            }
            else if(track[i][1] == 1){
                platform = 2;
            }
            table(i, pDeparture[i], platform, pArrival[i]);
        }
        if(pDeparture[i] == 1 && pArrival[i] == 5) {
            if(track[i][0] == 1){
                platform = 1;
            }
            else if(track[i][1] == 1){
                platform = 2;
            }
            table(i, pDeparture[i], platform, pArrival[i]);
        }
        if(pDeparture[i] == 2 && pArrival[i] == 1) {
            if(track[i][0] == 1){
                platform = 1;
            }
            else if(track[i][1] == 1){
                platform = 2;
            }
            table(i, pDeparture[i], platform, pArrival[i]);
        }
        if(pDeparture[i] == 2 && pArrival[i] == 3) {
            if(track[i][0] == 1){
                platform = 1;
            }
            else if(track[i][1] == 1){
                platform = 2;
            }
            table(i, pDeparture[i], platform, pArrival[i]);
        }
        if(pDeparture[i] == 2 && pArrival[i] == 4) {
            if(track[i][0] == 1){
                platform = 1;
            }
            else if(track[i][1] == 1){
                platform = 2;
            }
            table(i, pDeparture[i], platform, pArrival[i]);
        }
        if(pDeparture[i] == 2 && pArrival[i] == 5) {
            if(track[i][0] == 1){
                platform = 1;
            }
            else if(track[i][1] == 1){
                platform = 2;
            }
            table(i, pDeparture[i], platform, pArrival[i]);
        }
        if(pDeparture[i] == 3 && pArrival[i] == 1) {
            if(track[i][0] == 1){
                platform = 1;
            }
            else if(track[i][1] == 1){
                platform = 2;
            }
            table(i, pDeparture[i], platform, pArrival[i]);
        }
        if(pDeparture[i] == 3 && pArrival[i] == 2) {
            if(track[i][0] == 1){
                platform = 1;
            }
            else if(track[i][1] == 1){
                platform = 2;
            }
            table(i, pDeparture[i], platform, pArrival[i]);
        }
        if(pDeparture[i] == 3 && pArrival[i] == 4) {
            if(track[i][0] == 1){
                platform = 1;
            }
            else if(track[i][1] == 1){
                platform = 2;
            }
            table(i, pDeparture[i], platform, pArrival[i]);
        }
        if(pDeparture[i] == 3 && pArrival[i] == 5) {
            if(track[i][0] == 1){
                platform = 1;
            }
            else if(track[i][1] == 1){
                platform = 2;
            }
            table(i, pDeparture[i], platform, pArrival[i]);
        }
        if(pDeparture[i] == 4 && pArrival[i] == 1) {
            if(track[i][0] == 1){
                platform = 1;
            }
            else if(track[i][1] == 1){
                platform = 2;
            }
            table(i, pDeparture[i], platform, pArrival[i]);
        }
        if(pDeparture[i] == 4 && pArrival[i] == 2) {
            if(track[i][0] == 1){
                platform = 1;
            }
            else if(track[i][1] == 1){
                platform = 2;
            }
            table(i, pDeparture[i], platform, pArrival[i]);
        }
        if(pDeparture[i] == 4 && pArrival[i] == 3) {
            if(track[i][0] == 1){
                platform = 1;
            }
            else if(track[i][1] == 1){
                platform = 2;
            }
            table(i, pDeparture[i], platform, pArrival[i]);
        }
        if(pDeparture[i] == 4 && pArrival[i] == 5) {
            if(track[i][0] == 1){
                platform = 1;
            }
            else if(track[i][1] == 1){
                platform = 2;
            }
            table(i, pDeparture[i], platform, pArrival[i]);
        }
        if(pDeparture[i] == 5 && pArrival[i] == 1) {
            if(track[i][0] == 1){
                platform = 1;
            }
            else if(track[i][1] == 1){
                platform = 2;
            }
            table(i, pDeparture[i], platform, pArrival[i]);
        }
        if(pDeparture[i] == 5 && pArrival[i] == 2) {
            if(track[i][0] == 1){
                platform = 1;
            }
            else if(track[i][1] == 1){
                platform = 2;
            }
            table(i, pDeparture[i], platform, pArrival[i]);
        }
        if(pDeparture[i] == 5 && pArrival[i] == 3) {
            if(track[i][0] == 1){
                platform = 1;
            }
            else if(track[i][1] == 1){
                platform = 2;
            }
            table(i, pDeparture[i], platform, pArrival[i]);
        }
        if(pDeparture[i] == 5 && pArrival[i] == 4) {
            if(track[i][0] == 1){
                platform = 1;
            }
            else if(track[i][1] == 1){
                platform = 2;
            }
            table(i, pDeparture[i], platform, pArrival[i]);
        }

    }

    cout << " |_________________________________________________________________________________________________|" << endl;

    return 0;
}

void subwayMap()
{
    cout << "This is the map of the an underground subway network" << endl << endl;
    cout << "                                       D" << endl;
    cout << "                                      /" << endl;
    cout << "                                     /" << endl;
    cout << "                                    /" << endl;
    cout << "        A ------------------------ B ---------------- C" << endl;
    cout << "                                    \\                " << endl;
    cout << "                                     \\                " << endl;
    cout << "                                      E  " << endl;
}

float table(int num, int destination, int platform, int arrival)
{
    char station1, station2;

    switch(destination){
        case 1:
            station1 = 'A';
            break;
        case 2:
            station1 = 'B';
            break;
        case 3:
            station1 = 'C';
            break;
        case 4:
            station1 = 'D';
            break;
        case 5:
            station1 = 'E';
            break;
    }

    switch(arrival){
        case 1:
            station2 = 'A';
            break;
        case 2:
            station2 = 'B';
            break;
        case 3:
            station2 = 'C';
            break;
        case 4:
            station2 = 'D';
            break;
        case 5:
            station2 = 'E';
            break;
    }

    cout << " |-------------------------------------------------------------------------------------------------|" << endl;
    cout << " |" << setw(19) << num + 1 << setw(30) << station1 << setw(26) << platform << setw(22) << station2 << "|" << endl;

    return 0;
}
