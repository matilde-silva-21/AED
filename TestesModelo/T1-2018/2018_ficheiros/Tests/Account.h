/*
 * Account.h
 */

#ifndef SRC_ACCOUNT_H_
#define SRC_ACCOUNT_H_

#include <string>
#include<iostream>
using namespace std;


class Account {
protected:
	string holder;
	string codeHolder;
	string codeIBAN;
	double balance;
public:
	Account(string hold, string codeH, string codeA, double bal);
	virtual ~Account();
	string getCodH() const;
	string getCodIBAN() const;
	double getBalance() const;

    virtual double getWithdraw () const{return balance;}

};


class CheckingAccount: public Account {
	double limit; //lower limit for free checking
public:
	CheckingAccount (string hold, string codeH, string codeA, double bal, double lim);

    double getCharge() const {
        if(limit<=500){return 0.5;}
        else if(limit>500 && limit<=1000){return 0.25;}
        else return 0;
    }

};


class SavingsAccount: public Account {
protected:
	double rate;
public:
	SavingsAccount(string hold, string codeH, string codeA, double bal, double pct); //pct = percentage interest rate
	double getCharge(){
        if(rate*100 > 2.0) return 0.8;
        else return 0;
    }

};


class TimeAccount: public SavingsAccount {
	double funds_avail;
public:
	TimeAccount(string hold, string codeH, string codeA, double bal, double pct);
	//...

    double getWithdraw () const{return balance*rate;}

};

#endif /* SRC_ACCOUNT_H_ */
