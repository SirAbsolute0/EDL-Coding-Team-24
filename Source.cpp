#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include "Constants.h"
#include "EDLPart1.h"
#include "Deorbit.h"



using namespace std;

//User input variables init with 0
double Aeroshell_r,
Aeroshell_Chord = 0,
Aeroshell_Cd = 0; //This one will need to do more research on

int main()
{
    cout << "This program is a rough sketch of the calculations needed for EDL landing."
        << "Currently, the units used are km, m for distance; kg for mas; m/s for speed, celcius for temperature."
        << endl;
    
    cout << "Please start by entering the following information: " << endl
        << "Aeroshell radius: ";
    while (!(cin >> Aeroshell_r))
    {
        cout << "Please enter an appropritate value: ";
    }

    cout << "Aeroshell Chord: ";
    while (!(cin >> Aeroshell_Chord))
    {
        cout << "Please enter an appropriate value: ";
    }

    cout << "Aoeroshell Cd: ";
    while (!(cin >> Aeroshell_Cd))
    {
        cout << "Please eneter an appropriate value: ";
    }


}