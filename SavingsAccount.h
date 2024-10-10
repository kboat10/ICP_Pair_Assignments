#include<iostream>
#include "BankAccount.h"
#ifndef SAVINGSACCOUNT.H
#define SAVINGSACCOUNT.H
using namespace std;

class SavingsAccount: public BankAccount {
private:
    float interestRate;
    int interestTimePeriod;

public:
    SavingsAccount(int accountNumber, string accountHolder, double balance, float interestRate, int interestTimePeriod);
    void interestEarned();
};
#endif