#include<iostream>
#include "bankAccount.h"
using namespace std;

// constructor
bankAccount::bankAccount(string name, float bal){
	customerName = name;
	balance = bal;
}

void bankAccount::setName(string n){
	customerName = n;
}

void bankAccount::setBalance(float bal){
	balance = bal;
}

string bankAccount::getName(){
	return customerName;
}

float bankAccount::getBalance(){
	return balance;
}

void bankAccount::deposit(float dep){
	balance = balance + dep;
	//cout << " New Balance: $" << balance << endl;
}

void bankAccount::withdraw(float draw){
	balance = balance - draw;
	//cout << " New Balance: $" << balance << endl;
}

bankAccount::~bankAccount(){
	//cout << " Destructor" << endl;
}
