/*
	Author: CWN221
	Date: 26/09/2024
	Description: Calculation of the volume of a sphere
	RegNo: BSE-01-0032/2024
*/

#include <iostream>
#include <math.h>
using namespace std;

#define PI 3.142

int main()
{
	float radius, volume;
	
	//User Input
	cout<<"Enter radius: "<<endl;
	cin>>radius;
	
	//Formula
	volume = (4.0 / 3.0) * PI * pow(radius, 3);
	
	//Result
	cout<<"The volume of the sphere is "<<volume<<endl;
	
	return 0;
}