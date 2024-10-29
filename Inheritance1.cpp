/*
	Author: CWN221
	Date: 24/10/2024
	Description: Demonstrating concept of Inheritance in C++
	RegNo: BSE-01-0032/2024
*/
#include <iostream>
using namespace std;

const float PI = 3.142;

class Shape{
	protected:
		string color;
		
	public:
		//Member function
		void setColor(string c)
		{
			color = c;
		};
		
		string getColor()
		{
			return color;
		};
			
};

class Rectangle: public Shape {
	private:
		float length;
		float width;
		
	public:
		//Constructor
		Rectangle(float l, float w, string c) {
			length = l;
			width = w;
			setColor(c);
		}
		
		//Area
		double area(){
			return length * width;
		}
};

class Circle: public Shape {
	private:
		float radius;
		
	public:
		//Constructor
		Circle(float r, string c) {
			radius = r;
			setColor(c);
		}
		
		//Area
		double area()
		{
			return PI * radius * radius;
		}
};

int main()
{
	Rectangle rect(15, 10, "blue");
	Circle cir (2, "pink");
	
	//Display rectangle results
	cout<<"Rectangle(color): "<<rect.getColor()<<"\nRectangle(area): "<<rect.area()<<endl;
	
	//Display circle results
	cout<<"\nCircle(color): "<<cir.getColor()<<"\nCircle(area): "<<cir.area()<<endl;
	
	return 0;
}