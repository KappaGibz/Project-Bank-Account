// BankAccount.h
// Defines the private and public methods for Bank Account Class
// Project 2 -> Created by George C. Dani

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;

class BankAccount {
protected:
    double balance;
    int numDeposits;
    int numWithdrawal;
    double annInterestRate;
    double mServiceCharges;

public:
    BankAccount();
    BankAccount(double balance, int numDeposits, int numWithdrawal, double annInterestRate, double mServiceCharges);

    double getBalance();
    int getWithDrawls();

    virtual void deposit(double depositAmnt);
    virtual void withdraw(double withdrawAmt);
    virtual void calcInt();
    virtual void monthlyProc();
};

#endif //BANKACCOUNT_H
