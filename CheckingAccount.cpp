// CheckingAccount.cpp
// Implements the methods for the Checking Account Class
// Project 2  Created by Shahvaiz Sadeeb  on 4/2/2025

#include <iostream>
#include <iomanip>
#include <cmath>
#include "BankAccount.h"
#include "CheckingAccount.h"
using namespace std;

CheckingAccount::CheckingAccount() : BankAccount() {
}

CheckingAccount::CheckingAccount(double balance, int numDeposits, int numWithdrawal, double annInterestRate, double mServiceCharges)
    : BankAccount(balance, numDeposits, numWithdrawal, annInterestRate, mServiceCharges) {
}

void CheckingAccount::withdraw(double withdrawAmt) {
if (balance - withdrawAmt < 0) {
        // If withdrawal would cause balance to go below $0
        mServiceCharges += 15.0;
        cout << "Insufficient funds. A $15 service charge has been applied." << endl;
if (balance - mServiceCharges < 0) {
cout << "Warning: Your account is now overdrawn. You owe: $" << -1 * (balance - mServiceCharges) << endl;
}
    } else {
        BankAccount::withdraw(withdrawAmt);
    }
}

void CheckingAccount::monthlyProc() {
    mServiceCharges += (numWithdrawal * 0.10) + 5.0;
    BankAccount::monthlyProc();
}
