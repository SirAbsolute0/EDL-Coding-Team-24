#include "EDLPart1.h"

double Aeroshell_A(double Aeroshell_r)
{
	return (M_PI * pow(Aeroshell_r,2));
}

double Mass()
{
	return (M_Rover + M_EDL + M_Lander + M_Aeroshell);
}