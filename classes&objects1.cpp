/*
	Author: CWN221
	Date: 17/10/2024
	Description: Using classes and objects to calculate product of 3 integers
	RegNo: BSE-01-0032/2024
*/

#include <iostream>
using namespace std;

const float PI = 3.142;

class Cylinder
{	
private:
	//data members
	double radius;
	double height;
	
public:
	Cylinder(double rad, double hei){
		radius = rad;
		height = hei;
	};
	
	//memeber functions
	float volume()
	{
		return PI * radius * radius * height;
	}
	float surfaceArea()
	{
		return ( 2 * PI * radius * radius ) + ( 2 * PI * radius * height );
	}
	
};

int main()
{
	Cylinder cylinder(5, 10);
	
	cout << "The volume of the cylinder is " << cylinder.volume() <<endl;
	cout << "The surface area of the cylinder is " << cylinder.surfaceArea() <<endl;
	
	return 0;
}