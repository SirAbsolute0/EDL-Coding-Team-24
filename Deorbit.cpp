#include "Deorbit.h"
#include <iostream>
using namespace std;
 
int main()
{
    int l_sp = 0; //0 for the time being because it is not known.
    float G_0 = 9.806;
    float v_e;
    v_e = l_sp * G_0;
    printf("v_e is: %3f", v_e); //this will print v_e.
 
    //Variables from Mars, including radius, mass, and G_Const.
    float G_Const = 0.0000000000667;
    float M_Mars = 639000000000000000000000.0;
    float Rad_Mars = 3389500.0;
    float Delta_V;
    
    Delta_V=sqrt(G_Const*(M_Mars/Alt_0)) * (sqrt((2*Alt_Entry)/(Alt_0 + Alt_Entry))-1);
    printf("Delta_V is: %3f", Delta_V); //this will print Delta_V.
    
    Mass_Fuel=1-pow(e, -Delta_V/v_e);
    printf("Mass_Fuel is: %3f", Mass_Fuel); //this will print Mass_Fuel.
    
    float G_Alt;
    float Bal_num;
    float Vel_term;
    G_Alt= G_Const*M_Mars/ Alt^2;
    printf("G_Alt is: %3f", G_Alt);
 
    Bal_num= Mass / (Aeroshell_Cd * Aeroshell_A);
    printf("Bal_num is: %3f", Bal_num);
 
    Vel_term = sqrt ((2*B*G_Alt / Atmo_Dense);
    printf("Vel_term is %3f", Vel_term);
                     
    Vel_Sound=sqrt(1.4*287*(Temp+273.15);
    printf("Vel_Sound is: %3f", Vel_Sound);
                   
    Mach = Vel/Vel_Sound;
    printf("Mach is: %3f", Mach);
                   
    float Bal_num_impact;
    float Vel;
                   
    Bal_num_impact = Mass_Lander+Mass_Rover+Mass_Airbags;
    printf("Bal_num_impact: %3f", Bal_num_impact);
                   
    Vel_term = sqrt ((2*Bal_num_impact)/Atmo_Dense);
    printf("Vel_term at impact is: %3f", Vel_term);
                   
    Vel = sqrt(Vel^2 + 2 * G_Const * M_Mars * Alt);
    printf("Vel is: %3f", Vel);

    return 0;
}
