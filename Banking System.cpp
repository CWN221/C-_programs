/*
	Author: CWN221
	Date: 31/10/2024
	Description: Demonstrating concept of Inheritance in C++
	RegNo: BSE-01-0032/2024
*/

#include <iostream>
using namespace std;

class BankAccount
{
	protected:
		string accountHolder;
		float balance;
		
	public:
	//function 1
	void setAccountHolder(string name) 
	{
		accountHolder = name;
	};
	//function 2
	string getAccountHolder()
	{
		return accountHolder;
	};
	//function 3
	float getBalance()
	{
		return balance;	
	};
};

class SavingsAccount: public BankAccount
{
	private:
		float interestRate;
		
	public:	
	//Constructor
	SavingsAccount(string owner, float currentBalance, float rate) {
		accountHolder = owner;
		balance = currentBalance;
		interestRate = rate;
	}
	//function
	float calculateInterest() {
		 return interestRate * balance;  	
	}
};

class CheckingAccount : public BankAccount
{
	private:
		float transactionFee;
	
	public:
	//constructor
	CheckingAccount(string owner, float currentBalance, float fee) {
		accountHolder = owner;
		balance = currentBalance;
		fee = transactionFee;
	}
	//function
	void deductFee()
	{
		balance -= transactionFee;
	}
};


int main()
{
	//objects
	SavingsAccount savings("Alice", 1000, 0.03);
	CheckingAccount acc("Bob", 500, 2.5);
	
	//results from SavingsAccount
	cout<<"Savings Account;"<<endl;
	cout<<"Account holder: "<<savings.getAccountHolder()<<endl;
	cout<<"Account balance: "<<savings.getBalance()<<endl;
	cout<<"Interest rate: "<<savings.calculateInterest()<<endl;
	
	cout<<"\n"<<endl;
	
	//results from CheckingAccount
	cout<<"Checking Account;"<<endl; 
	cout<<"Account holder: "<<acc.getAccountHolder()<<endl;
	cout<<"Balance: "<<acc.getBalance()<<endl;
	cout<<"Updated balance: "<<acc.getBalance()<<endl; 
	
	return 0;
}