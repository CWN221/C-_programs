/*
	Author: CWN221
	Date: 03/10/2024
	Description: Cab ride fare calculator
	Reg No: BSE-01-0032/2024
*/
#include <iostream>
#include <cmath>
using namespace std;


float calculations(float distance, int passengers, char airportChoice)
{
	const float min_fare = 5.00;
	const float per_mile = 1.80;
	const float firstAdd_pass = 1.00;
	const float eachAdd_pass = 0.50;
	const float airport_surcharge = 2.00;
	
	float fare = distance * per_mile;
	
	//Minimum fare
	if (fare < min_fare)
	{
		fare = min_fare;
	}
	
	//Additional rider calculation
	if (passengers > 1)
	{
		fare += firstAdd_pass;
		fare += (passengers - 2) * eachAdd_pass;
	}
	
	//Airport surcharge
	if (airportChoice)
	{
		fare += airport_surcharge;
	}
	
	return fare;
	
}


int main()
{
	float distance;
	int passengers;
	char choice;
	char airportChoice;
	
	//User Prompt
	cout<<"Enter the trip distance(charges 1/10 of mile): ";
	cin>>distance;
	
	cout<<"Enter number of passengers: ";
	cin>>passengers;
	
	cout<<"Are you going to the airport?(Y/N): ";
	cin>>choice;
	airportChoice = (choice == 'Y' || choice == 'y');
	
	float total = calculations(distance, passengers, airportChoice);
	
	//Display the fare
	cout<<"\nTotal ride fare is $"<<total<<endl;
	
	return 0;
}