#include<iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(int accountNumber = 0, string accountHolder = "", double balance = 0.0);
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance();
};
