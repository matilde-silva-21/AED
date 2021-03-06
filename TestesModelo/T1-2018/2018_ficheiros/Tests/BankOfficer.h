/*
 * BankOfficer.h
 */

#ifndef SRC_BANKOFFICER_H_
#define SRC_BANKOFFICER_H_

#include "Account.h"
#include <string>
#include <vector>

class BankOfficer {
	unsigned int id, last_id;
	string name;
	vector<Account *> myAccounts;
public:
	BankOfficer();
	void setName(string nm);
	void addAccount(Account *a);
	void addAccount(vector<Account *> accounts);
	string getName() const;
	vector<Account *> getAccounts() const;
	unsigned int getID() const;

	//-------
	BankOfficer(string nm);
	vector<Account *> removeBankOfficer(string name);

    bool operator>(BankOfficer b1){
        if(myAccounts.size() > b1.myAccounts.size()) return true;
        else if(myAccounts.size() == b1.myAccounts.size()) return name>b1.name;
        else return false;
    }
};

#endif /* SRC_BANKOFFICER_H_ */
