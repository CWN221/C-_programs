/*
	Author: CWN221
	Date: 24/10/2024
	Description: Demonstrating concept of Inheritance in C++
	RegNo: BSE-01-0032/2024
*/

#include <iostream>
using namespace std;

class Car {
	private:
		string brand;
		string model;
		float price;
		int mileage;

	public:
	//Constructor
	Car(string bnd, string mod, float pri, int mil) {
		brand = bnd;
		model = mod;
		price = pri;
		mileage = mil;
	}
	//Display	
	void display() {
		cout<<"Car Brand: "<< brand <<endl;
		cout<<"Car Model: "<< model <<endl;
		cout<<"Car Price: "<< price <<endl;
		cout<<"Car Mileage: "<< mileage <<endl;
	}
	//Drive function
	void drive(int distance) {
		mileage += distance;
		cout<<"\nNew mileage: "<< mileage <<endl;
	}
};

int main()
{
	//Car object
	Car car("Toyota", "Corolla", 20000, 5000);
	
	//Display car details
	car.display();
	
	//Display updated mileage by simulation(150 miles)
	car.drive(150);
	
	//Display updated mileage by simulation(300 miles)
	car.drive(300);
	
	return 0;	
};