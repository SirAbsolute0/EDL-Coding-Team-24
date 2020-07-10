#include "Deorbit.h"
#include <iostream>
using namespace std;
 
int main()
{
    int l_sp = 0;
    float G_0 = 9.806;
    float v_e;
    v_e = l_sp * G_0;
    printf("%3f", v_e);
 
    float G_Const = 0.0000000000667;
    float M_Mars = 639000000000000000000000.0;
    float Rad_Mars = 3389500.0;
    float Delta_V;
    
    Delta_V=sqrt(G_Const*(M_Mars/Alt_0)) * (sqrt((2*Alt_Entry)/(Alt_0 + Alt_Entry))-1);
    
    Mass_Fuel=1-pow(e, -Delta_V/v_e);
    
    float G_Alt;
    float Bal_num;
    float Vel_term;
    G_Alt= G_Const*M_Mars/ Alt^2;
    Bal_num= Mass / (Aeroshell_Cd * Aeroshell_A);
    Vel_term = sqrt ((2*B*G_Alt / Atmo_Dense);
                     
    Vel_Sound=sqrt(1.4*287*(Temp+273.15);
    Mach = Vel/Vel_Sound;
    
    int i = 0;
    float Pres_impact;
    float Pres_total;
    Pres_impact = Pres_Static * ((1+.2Mach^2)^(7/2)-1);
    Pres_total=Pres_Static + Pres_impact + Atmo_Dense * G_Alt * Alt;
    
    Mu_0 = .01480;
    Suth_Const = 240;
    Temp_ref_visc = 527.67;
    Temp_Rank = Temp * (9/5) +491.67;
 
    return 0;
}
