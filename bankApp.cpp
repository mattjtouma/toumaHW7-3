#include<iostream>
#include "bankAccount.h"
using namespace std;


int main(){
// Part a
bankAccount jackAccount("Jack Smith", 50);
//cout << jackAccount.getName() << " has $" << jackAccount.getBalance() << endl;

// Part b
bankAccount jillAccount("Jill Brian", 100);
//cout << jillAccount.getName() << " has $" << jillAccount.getBalance() << endl;

// Part b
bankAccount bankArray[3] = {bankAccount("Ralph Kramden", 10), bankAccount("Alice Kramden", 20), bankAccount("Ed Norton", 30)};

// Part c
// deposit 30 dollars to each of the 5 accounts
jackAccount.deposit(30);
jillAccount.deposit(30);
bankArray[0].deposit(30);
bankArray[1].deposit(30);
bankArray[2].deposit(30);

// display the new balances
//cout << jackAccount.getName() << " has $" << jackAccount.getBalance() << endl;
//cout << jillAccount.getName() << " has $" << jillAccount.getBalance() << endl;
//cout << bankArray[0].getName() << " has $" << bankArray[0].getBalance() << endl;
//cout << bankArray[1].getName() << " has $" << bankArray[1].getBalance() << endl;
//cout << bankArray[2].getName() << " has $" << bankArray[2].getBalance() << endl;

// Part d
jackAccount.withdraw(20);
jillAccount.withdraw(20);
bankArray[0].withdraw(20);
bankArray[1].withdraw(20);
bankArray[2].withdraw(20);

// Part e
// display the new balances
cout << jackAccount.getName() << " has $" << jackAccount.getBalance() << endl;
cout << jillAccount.getName() << " has $" << jillAccount.getBalance() << endl;
cout << bankArray[0].getName() << " has $" << bankArray[0].getBalance() << endl;
cout << bankArray[1].getName() << " has $" << bankArray[1].getBalance() << endl;
cout << bankArray[2].getName() << " has $" << bankArray[2].getBalance() << endl;

return 0;
}
