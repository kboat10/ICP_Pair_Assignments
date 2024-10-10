#include<iostream>
#include "BankAccount.h"
#ifndef BANKACCOUNT.H
#define BANKACCOUNT.H
using namespace std;

BankAccount::BankAccount(int accountNumber = 0, string accountHolder = "", double balance = 0.0) {
    this -> accountNumber = accountNumber;
    this -> accountHolder = accountHolder;
    this -> balance = balance;
}

void BankAccount::deposit(double amount) {
    balance += amount;
}

void BankAccount::withdraw(double amount) {
    if (balance - amount >= 0)
    {
        balance -= amount;
    }

    else {
        cout << "You do not have enough funds.";
    }
}

double BankAccount::getBalance() {
    return balance;
}
#endif