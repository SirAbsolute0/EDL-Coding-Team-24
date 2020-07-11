#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
#include "Constants.h"
#include "EDLPart1.h"
#include "Deorbit.h"



using namespace std;

//User input variables init with 0
double Aeroshell_r = 0,
Aeroshell_Chord = 0,
Aeroshell_Cd = 0, //This one will need to do more research on
Altitude = 0;

int main()
{
    cout << "This program is a rough sketch of the calculations needed for EDL landing."
        << "Currently, the units used are: "<< endl 
        << "m for distance; kg for mass; m/s for speed, C for temperature, NM^2/kg^2 for G_Const" << endl;

    cout << "Please start by entering the following information: " << endl
        << "Aeroshell radius: ";
    while (!(cin >> Aeroshell_r))
    {
        cout << "Please enter an appropritate value: ";
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    }

    cout << "Aeroshell Chord: ";
    while (!(cin >> Aeroshell_Chord))
    {
        cout << "Please enter an appropriate value: ";
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    }

    cout << "Aoeroshell Cd: ";
    while (!(cin >> Aeroshell_Cd))
    {
        cout << "Please eneter an appropriate value: ";
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    }

    cout << fixed << setprecision(4) << endl;

    cout << "Below are the calculated values." << endl
        << "Aeroshell_A: " << Aeroshell_A(Aeroshell_r) << endl
        << "Mass: " << Mass() << endl
        << "v_e: " << v_e() << endl
        << "Delta_V: " << Delta_V() << endl
        << "Mass_Fuel: " << Mass_Fuel() << endl;

    cout << "The calculations below required Altitude. Please enter the value for Altitude: ";
    while (!(cin >> Altitude))
    {
        cout << "Please enter an appropriate value: ";
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    }

    cout << "Below are the alculated values related to Altitude." << endl
        << "Temp: " << Temp(Altitude) << endl
        << "Pres_Static: " << Press_Static(Altitude) << "kPa" << endl
        << "Atmos_Dense: " << Atmos_Dense(Altitude) << "kg/m^3" << endl
        << "G_Alt: " << G_Alt(Altitude) << endl;

    double Bal_num_temp = Bal_num(Mass(), Aeroshell_Cd, Aeroshell_A(Aeroshell_r)); //Temporal solution to hold a long value

    cout << "Bal_num: " << Bal_num_temp << endl
        << "Vel_term1: " << Vel_term1(Bal_num_temp, Atmos_Dense(Altitude), G_Alt(Altitude)) << endl;

    double Vel_sound_temp = Vel_Sound(Temp(Altitude));                       //Also a temporal solution to hold value

    cout << "Vel_sound: " << Vel_sound_temp << endl
        << "Bal_num_impact: " << Bal_num_impact() << endl
        << "Vel_term2: " << Vel_term2(Atmos_Dense(Altitude)) << endl
        << "Vel: " << Vel(Altitude) << endl
        << "Mach: " << Mach(Vel(Altitude), Vel_sound_temp) << endl
        << endl
        << endl
        << "This conclude the end of the calculations.";

    return 0;
}