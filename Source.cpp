#include <iostream>
#include <cmath>
#include "EDLPart1.h"
#include "Deorbit.h"

using namespace std;

//Constant variables on Mars
const double Alt_0 = 400000,
Vel_0 = 3362;

//Constant variables of our Rover
const double M_Rover = 46,
M_EDL,
M_Lander,
Aeroshell;

//User input variables init with 0
double Aeroshell_r = 0,
Aeroshell_Chord = 0,
Aeroshell_Cd = 0; //This one will need to do more research on

int main()
{
    cout << "This program is a rough sketch of the calculations needed for EDL landing."
        << "Currently, the units used are km, m for distance; kg for mas; m/s for speed."
        << endl;
    
}