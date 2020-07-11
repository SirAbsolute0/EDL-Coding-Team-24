#include "Deorbit.h"
#include <iostream>
using namespace std;

int I_sp = 0;
double G_0 = 9.806;
     
double v_e()
{
    return ( I_sp * G_0 );
}   
      
double Delta_V()
{
    return ( sqrt(G_Const * (M_Mars / Alt_0)) * (sqrt((2 * Alt_Entry) / (Alt_0 + Alt_Entry)) - 1) );
}   
    
double Mass_Fuel()
{
    return ( 1 - exp(- Delta_V() / v_e()) );
}    
    
double G_Alt(double Altitude)
{
    return ( G_Const * M_Mars / pow(Altitude,2) );
} 

double Bal_num(double Mass, double Aeroshell_Cd, double Aeroshell_A)
{
    return ( Mass / (Aeroshell_Cd * Aeroshell_A) );
}    
 
double Vel_term1(double Bal_num, double Atmos_Dense, double G_Alt)    
{
    
   return  ( sqrt((2 * Bal_num * G_Alt / Atmos_Dense)) );
}
                         
double Vel_Sound(double Temp) //need more addressing
{
   return  sqrt(1.4 * 287 * (Temp + 273.1500)) ;
}
               
double Bal_num_impact()
{
    return ( M_Lander + M_Rover + M_Airbags );
}
                   
double Vel_term2(double Atmos_Dense)
{
    return sqrt( (2 * Bal_num_impact()) / Atmos_Dense);
}
                   
double Vel(double Altitude)
{
    if (Altitude <= 100)
    {
       return sqrt(2 * G_Const * M_Mars * Altitude);
    }
    else
    {
        cout << "N/A. Since Altitude didn't reach below 100m, Vel value will not be calculated." << endl;
        return 0;
    }
    
}

double Mach(double Vel, double Vel_Sound)
{
    return ( Vel / Vel_Sound );
}

