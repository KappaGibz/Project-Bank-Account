// SavingsAccount.h
// Defines the private and public methods Savings Account Class
// Project 2 -> Created by George C. Dani on 3/7/25

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "BankAccount.h"
#include <string>
using namespace std;

class SavingsAccount : public BankAccount {
private:
    bool status;

public:
    SavingsAccount();
    SavingsAccount(double balance, int numDeposits, int numWithdrawal, double annInterestRate, double mServiceCharges, bool status);

    void checkBalance();
    void withdraw(double withdrawAmt) override;
    void deposit(double depositAmt) override;
    bool getStatus();
    void monthlyProc() override;
};

#endif // SAVINGSACCOUNT_H