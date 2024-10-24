/*
	Author: CWN221
	Date: 17/10/2024
	Description: Using classes and objects to calculate product of 3 integers
	RegNo: BSE-01-0032/2024
*/

#include <iostream>
using namespace std;

class Addition{
	public:
		int a, b, c;
	
	//member function
	int product(){
		return a * b * c;
	}
};

int main()
{
	Addition num;
	num.a = 22;
	num.b = 30;
	num.c = 50;
	
	cout<<"The product of 22,30 & 50 is "<<num.product()<<endl;
	
	return 0;
}