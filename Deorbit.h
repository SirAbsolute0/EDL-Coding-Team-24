//This is the header file for function protos for Deorbit
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include "Constants.h"


using namespace std;


int I_sp = 0; //0 for the time being because it is not known. //NEED ATTENTION
float G_0 = 9.806;


float v_e(); //NEED ATTENTION
float Delta_V();
float Mass_Fuel();
float G_Alt(float);
float Bal_num(float, float, float);
float Vel_term1();
float Vel_Sound();
float Bal_num_impact();
float Vel_term2();
float Vel();
float Mach();