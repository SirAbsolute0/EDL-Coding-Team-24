#include "EDLPart1.h"

double Aeroshell_A(double Aeroshell_r)
{
	return ( M_PI * pow(Aeroshell_r,2) );
}

double Mass()
{
	return ( M_Rover + M_EDL + M_Lander + M_Aeroshell );
}

double Temp(double Altitude)
{
	if (Altitude >= 7000)
	{
		return( -23.4 - .00222 * Altitude );
	}
	else
	{
		return (-31 - .00998 * Altitude);
	}
}

double Press_Static(double Altitude)
{
	return ( .699 * exp(-.00009 * Altitude) );
}

double Atmos_Dense(double Altitude)
{
	return (Press_Static(Altitude) / (.1921 * (Temp(Altitude) + 273.1)));
}