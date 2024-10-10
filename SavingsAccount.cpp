#include<iostream>
#include "SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount(int accountNumber, string accountHolder, double balance, float interestRate, int interestTimePeriod): BankAccount(accountNumber, accountHolder, balance) {
    this -> interestRate = interestRate;
    this -> interestTimePeriod = interestTimePeriod;
}

void SavingsAccount::interestEarned() {
    if (getBalance != 0) {
        double interest = getBalance() * interestRate * interestTimePeriod;
        deposit(interest);
    }

    else {
        cout << "There's no money in your account.";
    }
}