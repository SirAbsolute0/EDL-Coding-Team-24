//This is the header file for function protos for Deorbit
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include "Constants.h"


using namespace std;

double v_e(); //NEED ATTENTION
double Delta_V();
double Mass_Fuel();
double G_Alt(double);
double Bal_num(double, double, double);
double Vel_term1(double, double);
double Vel_Sound(double);
double Bal_num_impact();
double Vel_term2(double);
double Vel(double);
double Mach(double, double);