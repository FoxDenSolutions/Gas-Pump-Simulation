#ifndef GASPUMP_H
#define GASPUMP_H
#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;

class GasPump 
{
	
private:
		string gastype;
		double gaspricepergallon;
		double totalgasd;
		double totalmoneycollected;
		
public:
	GasPump(string,double);
	string getgastype() const
	{return gastype; }
	double getgaspricepergallon()const
	{return gaspricepergallon; }
	double gettotalgasd()const
	{return totalgasd; }
	double gettotalmoneycollected()const
	{return totalmoneycollected; }
	double dispenseFuel(double);
	
	


	};



#endif