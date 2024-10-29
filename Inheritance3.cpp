/*
	Author: CWN221
	Date: 24/10/2024
	Description: Demonstrating concept of Inheritance in C++
	RegNo: BSE-01-0032/2024
*/

#include <iostream>
using namespace std;

class Movie {
	protected:
	   	string title;
	   	string director;
	   	int duration;
	   	float rating;
	   	
   	public:
   		//Constructor
   		Movie(string tte, string dir, int dur, float rtg){
			  title = tte;
			  director = dir;
			  duration = dur;
			  rating = rtg; 
		}
		//Display   
   		void display() {
			   cout<<"Title: " << title << endl;
			   cout<<"Director: " << director << endl;
			   cout<<"Duration(minutes): " << duration << endl;
			   cout<<"Rating: " << rating << endl;
		}
		
		//Function for rating movie
		void rateMovie(float rate) {
			if (rate >= 1.0 && rate <= 5.0) {
				rating = rate;
			} else {
				cout<<"Invalid rating"<<endl;
			}
		}
};

int main()
{
	
	Movie play("Inception", "Christopher Nolan", 148, 4.8);
	
	//Display the results of the movie
	play.display();
	
	//Updating rate
	cout<<"\nUpdated rating;\n"<<endl;
	play.rateMovie(5.0);
	play.display();
	
	//Test to show invalid rating
	cout<<"\nTest to show invalid rating;\n"<<endl;
	play.rateMovie(6.0);
	play.display();
	
	return 0;
};