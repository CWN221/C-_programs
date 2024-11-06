/*
	Author: CWN221
	Date: 31/10/2024
	Description: Demonstrating concept of Inheritance in C++
	RegNo: BSE-01-0032/2024
*/

#include <iostream>
using namespace std;

class Person 
{
	protected:
		string name;
	
	public:
		//function
		void setName(string n) {
			name = n;
		}
		string getName() {
			return name;
		}
};


class Student : public Person
{
	private:
		int studentID;

	public:	
	//Constructor
		Student(string n, int ID) {
			name = n;
			studentID = ID;
		}
	//function
		int getStudentID() {
			return studentID;
		}
};


class GraduateStudent : public Student
{
	private:
		string researchTopic;
		
	public:
		//Constructor
		GraduateStudent(string n, int ID, string topic) : Student(n, ID){
			researchTopic = topic;
		}
		//Function
		string getResearchTopic() {
			return researchTopic;
		}
};

int main()
{
	//Object
	Student stu("John", 1001);
	GraduateStudent gradStu ("Alice", 2001, "Artificial Intelligence");
	
	//Print Results (oject:stu)
	cout<<"Name: "<<stu.getName()<<endl;
	cout<<"Student ID: "<<stu.getStudentID()<<endl;
	
	cout<<"\n"<<endl;
	
	//Print results (object gradStu)
	cout<<"Grad Student's Name: "<<gradStu.getName()<<endl;
	cout<<"Grad StudentId: "<<gradStu.getStudentID()<<endl;
	cout<<"Research Topic: "<<gradStu.getResearchTopic()<<endl;
	
	return 0;
}