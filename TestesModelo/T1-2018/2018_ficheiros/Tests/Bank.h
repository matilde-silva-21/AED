/*
 * Bank.h
 */

#ifndef SRC_BANK_H_
#define SRC_BANK_H_

#include "Account.h"
#include <vector>

#include "BankOfficer.h"

class NoBankOfficerException{
    string name;

public:
    string getName(){return name;}
    NoBankOfficerException(string name){
        this->name = name;
    }

};


class Bank {
	vector<Account *> accounts;
	vector<BankOfficer> bankOfficers;
public:
	Bank();
	void addAccount(Account *a);
	void addBankOfficer(BankOfficer b);
	vector<BankOfficer> getBankOfficers() const;
	vector<Account *> getAccounts() const;

	//-------
	double getWithdraw(string cod1) const;
	vector<Account *> removeBankOfficer(string name);
	const BankOfficer& addAccountToBankOfficer(Account *ac, string name);
	void sortAccounts();

};

template<typename T>
unsigned int numberDifferent(vector<T> vector1){
    vector<T> copy;
    for (T cur : vector1){
        if(find(copy.begin(),copy.end(),cur) == copy.end()){copy.push_back(cur);}
    }
    return copy.size();
}

#endif /* SRC_BANK_H_ */
