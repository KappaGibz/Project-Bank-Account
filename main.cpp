// main.cpp
// Main program to demonstrate the Bank Account classes
// Project 2 Created by Shahvaiz Sadeeb  on 4/4/2025

#include <iostream>
#include <iomanip>
#include "BankAccount.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
using namespace std;

int main() {
double initialBalance;
double annualInterestRate;
int choice;
double amount;
    
//create accounts
SavingsAccount savings;
CheckingAccount checking;
    
cout << "BANK ACCOUNT DEMONSTRATION PROGRAM" << endl;
cout << "==================================" << endl << endl;
    
//Initialize savings account
cout << "SAVINGS ACCOUNT SETUP" << endl;
cout << "---------------------" << endl;
cout << "Enter initial balance: $";
cin >> initialBalance;
cout << "Enter annual interest rate (as decimal): ";
cin >> annualInterestRate;
    
savings = SavingsAccount(initialBalance, 0, 0, annualInterestRate, 0, true);
savings.checkBalance();
    
//checking account
cout << "\nCHECKING ACCOUNT SETUP" << endl;
cout << "----------------------" << endl;
cout << "Enter initial balance: $";
cin >> initialBalance;
cout << "Enter annual interest rate (as decimal): ";
cin >> annualInterestRate;
checking = CheckingAccount(initialBalance, 0, 0, annualInterestRate, 0);
    
//menu
do {
cout << "\nBANK ACCOUNT MENU" << endl;
cout << "=================" << endl;
cout << "1. Deposit to Savings" << endl;
cout << "2. Deposit to Checking" << endl;
cout << "3. Withdraw from Savings" << endl;
cout << "4. Withdraw from Checking" << endl;
cout << "5. Display Account Info" << endl;
cout << "6. Process Monthly Activity" << endl;
cout << "7. Exit" << endl;
cout << "Enter your choice (1-7): ";
cin >> choice;
        
switch (choice) {
case 1: //Deposit to savings
                cout << "Enter deposit amount: $";
                cin >> amount;
                savings.deposit(amount);
                cout << "Deposit successful. New balance: $" << savings.getBalance() << endl;
                break;
                
case 2: // deposit to checking
                cout << "Enter deposit amount: $";
                cin >> amount;
                checking.deposit(amount);
                cout << "Deposit successful. New balance: $" << checking.getBalance() << endl;
                break;
                
case 3: //withdraw from savings
                cout << "Enter withdrawal amount: $";
                cin >> amount;
                savings.withdraw(amount);
                cout << "Current balance: $" << savings.getBalance() << endl;
                cout << "Account status: " << (savings.getStatus() ? "Active" : "Inactive") << endl;
                break;
                
case 4: //withdraw from checking
                cout << "Enter withdrawal amount: $";
                cin >> amount;
                checking.withdraw(amount);
                cout << "Current balance: $" << checking.getBalance() << endl;
                break;
                
case 5: //display account info
                cout << "\nSAVINGS ACCOUNT INFORMATION" << endl;
                cout << "----------------------------" << endl;
                cout << "Current balance: $" << fixed << setprecision(2) << savings.getBalance() << endl;
                cout << "Number of deposits: " << savings.getWithDrawls() << endl;
                cout << "Account status: " << (savings.getStatus() ? "Active" : "Inactive") << endl;
                
                cout << "\nCHECKING ACCOUNT INFORMATION" << endl;
                cout << "-----------------------------" << endl;
                cout << "Current balance: $" << fixed << setprecision(2) << checking.getBalance() << endl;
                cout << "Number of withdrawals: " << checking.getWithDrawls() << endl;
                break;
                
case 6: //process monthly activity
                cout << "\nProcessing monthly activities..." << endl;
                
                cout << "SAVINGS ACCOUNT - Before processing:" << endl;
                cout << "Balance: $" << savings.getBalance() << endl;
                
                savings.monthlyProc();
                
                cout << "SAVINGS ACCOUNT - After processing:" << endl;
                cout << "Balance: $" << savings.getBalance() << endl;
                cout << "Status: " << (savings.getStatus() ? "Active" : "Inactive") << endl;
                
                cout << "\nCHECKING ACCOUNT - Before processing:" << endl;
                cout << "Balance: $" << checking.getBalance() << endl;
                
                checking.monthlyProc();
                
                cout << "CHECKING ACCOUNT - After processing:" << endl;
                cout << "Balance: $" << checking.getBalance() << endl;
                break;
                
case 7: //exit
cout << "Thank you for using the Bank Account Program!" << endl;
break;
                
default:
cout << "Invalid choice, try again." << endl;
}
        
} while (choice != 7);
    
return 0;
}