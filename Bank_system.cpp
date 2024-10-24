/*
	Author: CWN221
	Date: 17/10/2024
	Description: Banking system using classes & objects
	RegNo: BSE-01-0032/2024
*/

#include <iostream>
using namespace std;

class BankAccount
{
private:
	string accountNumber;
	double balance;
		
public:
	BankAccount(string accountNumber)
	{
		accountNumber = accountNumber;
		balance = 0;
	}
	//Deposit
	int deposit(double amount)
	{
		if (amount > 0){
			balance += amount;
			cout<<"You have deposited $"<<amount<<endl;
		}
	}
	//Withdraw
	int withdraw(double amount)
	{
		if (amount > balance){
			cout<<"Your transaction cannot be completed.You have insufficient funds in your account."<<endl;
		}
		else {
			balance -= amount;
			cout<<"You have withdrawn $"<<amount<<endl;
		}
	}
	//Balance
	double getBalance()
	{
		return balance;
	}
	
};

int main()
{
	BankAccount Acc("4622865130");
	
	Acc.deposit(500);
	Acc.withdraw(200);
	Acc.withdraw(400);
	
	//Balance
	cout<<"Your balance is $"<<Acc.getBalance()<<endl;
	
	return 0;
}