//Use of For loop
#include <iostream>

using namespace std;

int main()
{
	int i, sum = 0;
	for (i = 1; i <= 100; i++)
	{
		cout<<i<<endl;
		sum += i;
	}
	
	cout<<"The sum is "<<sum<<endl;
	
	return 0;
}