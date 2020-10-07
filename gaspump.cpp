#include "gaspump.h"
#include <iostream>
#include <string>


GasPump::GasPump(string typ,double price)
{
	 gastype=typ;
	 gaspricepergallon=price;
}

double GasPump:: dispenseFuel(double moneyforgas)
{
	double amountofgasrecieved;
	amountofgasrecieved = moneyforgas / gaspricepergallon;
	totalgasd += amountofgasrecieved;
	totalmoneycollected += moneyforgas;
	return  amountofgasrecieved;
	
}