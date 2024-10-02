/*
	Author: CWN221
	Date: 26/09/2024
	Description: C++ Program to calculate gross pay, tax & net pay
	RegNo: BSE-01-0032/2024
*/
#include <iostream>
using namespace std;

int main()
{
	int hours;
	float hWage, grossPay, tax, netPay;
	
	//User Input
	cout<<"Enter hours worked this week: "<<endl;
	cin>>hours;
	
	cout<<"Enter hourly wage: "<<endl;
	cin>>hWage;
	
	//Calculate Overtime
	if (hours > 40)
	{
		//1. Pay the first 40 hours
		grossPay = 40 * hWage;
		// Overtime
		grossPay += (hours - 40) * (hWage * 1.5);
	}
	else
	{
		grossPay = hours * hWage;
	}
	
	//Calculate Taxes
	if (grossPay <= 600)
	{
		tax = grossPay * 0.15;
	}
	else if (grossPay > 600)
	{
		tax = (600 * 0.15) + ((grossPay - 600) * 0.20);
	}
	
	//Calculate Net Pay
	netPay = grossPay - tax;
	
	//Results
	cout<<"Gross Pay: "<<grossPay<<endl;
	cout<<"Tax: "<<tax<<endl;
	cout<<"Net Pay: "<<netPay<<endl;
	
	
	return 0;
}