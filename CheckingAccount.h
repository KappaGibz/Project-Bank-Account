// CheckingAccount.h
// Defines the private and public methods Checking Account Class
// Project 2   Created by Shahvaiz Sadeeb  on 4/2/2025

#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "BankAccount.h"
#include <string>
using namespace std;

class CheckingAccount : public BankAccount {
public:
    CheckingAccount();
    CheckingAccount(double balance, int numDeposits, int numWithdrawal, double annInterestRate, double mServiceCharges);

    void withdraw(double withdrawAmt) override;
    void monthlyProc() override;
};

#endif // CHECKINGACCOUNT_H
