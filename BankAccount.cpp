// BankAccount.cpp
// Implements the methods for the Bank Account Class
// Project 2 -> Created by George C. Dani on 3/7/25

#include <iostream>
#include <iomanip>
#include <cmath>
#include "BankAccount.h"
using namespace std;

BankAccount::BankAccount() {
    this->balance = 0.0;
    this->numDeposits = 0;
    this->numWithdrawal = 0;
    this->annInterestRate = 0.0;
    this->mServiceCharges = 0.0;
}

BankAccount::BankAccount(double balance, int numDeposits, int numWithdrawal, double annInterestRate, double mServiceCharges) {
    this->balance = balance;
    this->numDeposits = numDeposits;
    this->numWithdrawal = numWithdrawal;
    this->annInterestRate = annInterestRate;
    this->mServiceCharges = mServiceCharges;
}

double BankAccount::getBalance() {
    return this->balance;
}

int BankAccount::getWithDrawls() {
    return this->numWithdrawal;
}

void BankAccount::deposit(double depositAmnt) {
    this->balance += depositAmnt;
    this->numDeposits++;
}

void BankAccount::withdraw(double withdrawAmt) {
    this->balance -= withdrawAmt;
    this->numWithdrawal++;
}

void BankAccount::calcInt() {
    double monthlyInterestRate = (this->annInterestRate / 12);
    double monthlyInterest = this->balance * monthlyInterestRate;
    this->balance += monthlyInterest;
}

void BankAccount::monthlyProc() {
    this->balance -= this->mServiceCharges;
    calcInt();
    this->numDeposits = 0;
    this->numWithdrawal = 0;
    this->mServiceCharges = 0;
}
