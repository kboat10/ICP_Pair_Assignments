#include<iostream>
#include "CheckingAccount.h"
using namespace std;

CheckingAccount::CheckingAccount(int accountNumber, string accountHolder, double balance, double transactionFee): BankAccount(accountNumber,accountHolder,balance) {
    this -> transactionFee = transactionFee;
}

void CheckingAccount::deposit(double amount) {
    BankAccount::deposit(amount);
    BankAccount::withdraw(transactionFee);
}

void CheckingAccount::withdraw(double amount) {
    if (getBalance() - amount >= 0)
    {
        BankAccount::withdraw(amount);
        BankAccount::withdraw(transactionFee);
    }

    else {
        cout << "You do not have enough funds.";
    }
}