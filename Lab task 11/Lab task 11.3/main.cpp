#include <iostream>
#include <math.h>

using namespace std;

float kineticEnergy(float mass, float velocity);

float mass, velocity, energy;

int main()
{
    cout << "Enter the mass of the object (in Kg): ";
    cin >> mass;

    cout << "Enter the velocity of the object (in meters per second): ";
    cin >> velocity;

    energy = kineticEnergy(mass, velocity);

    cout << endl;
    cout << "The object has a kinetic energy of " << energy << "J" << endl;

    return 0;
}

float kineticEnergy(float mass, float velocity)
{
    float kE;

    kE = 0.5 * mass * pow(velocity, 2);

    return kE;
}
