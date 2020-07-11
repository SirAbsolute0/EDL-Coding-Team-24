#include "EDLPart1.h"

float Aeroshell_A(float Aeroshell_r)
{
	return ( M_PI * pow(Aeroshell_r,2) );
}

float Mass()
{
	return ( M_Rover + M_EDL + M_Lander + M_Aeroshell );
}

float Temp(float Altitude)
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

float Press_Static(float Altitude)
{
	return ( .699 * exp(-.00009 * Altitude) );
}

float Atmos_Dense(float Altitude)
{
	return (Press_Static(Altitude) / (.1921 * (Temp(Altitude) + 273.1)));
}