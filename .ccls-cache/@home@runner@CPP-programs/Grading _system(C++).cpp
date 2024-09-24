/*
	Author: CWN221
	Reg No: BSE-01-0032/2024
	Date: 9/12/2024
	Desciption: A grading system based on average score
*/

#include <iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int score, sub1, sub2, sub3;
	char grade;
	
	//Score entry
	cout<<"Enter marks for 3 subjects: "<<endl;
	cout<<"Enter score 1: "<<endl;
	cin>>sub1;
	cout<<"Enter score 2: "<<endl;
	cin>>sub2;
	cout<<"Enter score 3: "<<endl;
	cin>>sub3;
	
	//Calculate Average
	score = (sub1 + sub2 + sub3) / 3;
	
	if (score >= 70)
	{
		grade = 'A';
	}
	else if (score >= 60 && score <= 69)
	{
		grade = 'B';
	}
	else if (score >= 50 && score <= 59)
	{
		grade = 'C';
	}
	else if (score >= 40 && score <= 49)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}
	
	switch(grade)
	{
		case 'A':
			cout<<"Grade: A "<< endl;
			break;
		
		case 'B':
			cout<<"Grade: B "<<endl;
			break;
		
		case 'C':
			cout<<"Grade: C "<<endl;
			break;
		
		case 'D':
			cout<<"Grade: D "<<endl;
			break;
		
		case 'F':
			cout<<"Grade: FAIL "<<endl;
			break;
		
		default:
			return 1;
		
	}
	
	system("pause");
	
	
	return 0;
}