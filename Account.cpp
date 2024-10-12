#include<iostream>
#include "Account.h"
using namespace std;

Account::Account(int accountNumber, string firstName, string lastName, string dob, string gender, string address, int phoneContact, string email, double balance): Customer(accountNumber, firstName, lastName, dob, gender, address, phoneContact, email) {
    if (balance >= 0.0)
    {
        this -> balance = balance;
    }
    
    else {
        balance = 0.0;
        cout << "Invalid balance entered.";
    }
}

void Account::credit(double amount) {
    balance += amount;
}

void Account::debit(double amount) {
    if (amount > balance)
    {
        cout << "You do not have enough funds for this transaction.";
    }

    else {
        balance -= amount;
    }
}

double Account::getBalance() {
    return balance;
}
