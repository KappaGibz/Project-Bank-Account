// SavingsAccount.cpp
// Implements the methods for the Savings Account Class
// Project 2 -> Created by George C. Dani on 3/7/25

#include <iostream>
#include <iomanip>
#include <cmath>
#include "BankAccount.h"
#include "SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount() : BankAccount() {
    this->status = false;
    checkBalance();
}

SavingsAccount::SavingsAccount(double balance, int numDeposits, int numWithdrawal, double annInterestRate, double mServiceCharges, bool status)
    : BankAccount(balance, numDeposits, numWithdrawal, annInterestRate, mServiceCharges) {
    this->status = status;
    checkBalance();
}

void SavingsAccount::checkBalance() {
    if (balance < 25) {
        status = false;
    }
    else {
        status = true;
    }
}

void SavingsAccount::withdraw(double withdrawAmt) {
    if (status == false) {
        cout << "Account isn't Active Right Now, Please try Again Later.." << endl;
    } else {
        BankAccount::withdraw(withdrawAmt);        
        checkBalance();
    }
}

void SavingsAccount::deposit(double depositAmt) {
    BankAccount::deposit(depositAmt);
    checkBalance();
}

bool SavingsAccount::getStatus() {
    return this->status;
}

void SavingsAccount::monthlyProc() {
    if (numWithdrawal > 4) {
        double serviceCharge = (numWithdrawal - 4) * 1.0;
        mServiceCharges += serviceCharge;
    }
    BankAccount::monthlyProc();
    checkBalance();
}