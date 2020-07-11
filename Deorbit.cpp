#include "Deorbit.h"
#include <iostream>
using namespace std;
     
float v_e()
{
    return ( I_sp * G_0 );
}   
      
float Delta_V()
{
    return ( sqrt(G_Const * (M_Mars / Alt_0)) * (sqrt((2 * Alt_Entry) / (Alt_0 + Alt_Entry)) - 1) );
}   
    
float Mass_Fuel()
{
    return ( 1 - exp(- Delta_V() / v_e()) );
}    
    
float G_Alt(float Altitude)
{
    return ( G_Const * M_Mars / pow(Altitude,2) );
} 

float Bal_num(float Mass, float Aeroshell_Cd, float Aeroshell_A)
{
    return ( Mass / (Aeroshell_Cd * Aeroshell_A) );
}    
 





float Vel_term1()     //need more addressing
{
    
   return sqrt((2 * Bal_num() * G_Alt / Atmo_Dense);
}
    
                     
float Vel_Sound() //need more addressing
{
    sqrt(1.4 * 287 * (Temp + 273.15);
}

               
float Bal_num_impact()
{
    return ( M_Lander + M_Rover + M_Airbags );
}
                   
float Vel_term2()
{
    sqrt( (2 * Bal_num_impact()) / Atmo_Dense);
}
                   
float Vel()
{
    sqrt(Vel ^ 2 + 2 * G_Const * M_Mars * Alt);
}

float Mach()
{
    return ( Vel() / Vel_Sound() );
}

