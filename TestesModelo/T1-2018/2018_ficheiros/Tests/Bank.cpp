/*
 * Bank.cpp
 */

#include "Bank.h"
#include <algorithm>
#include <string>

Bank::Bank() {}

void Bank::addAccount(Account *a) {
	accounts.push_back(a);
}

void Bank::addBankOfficer(BankOfficer b){
	bankOfficers.push_back(b);
}

vector<BankOfficer> Bank::getBankOfficers() const {
	return bankOfficers;
}

vector<Account *> Bank::getAccounts() const {
	return accounts;
}


// ----------------------------------------------------------------------------------------------

// a alterar
double Bank::getWithdraw(string cod1) const{
    vector<Account *> copy = getAccounts();
    double total=0;
    for(Account *cur : copy){

        if(cur->getCodH() == cod1) total+=cur->getWithdraw();
    }

    return total;
}


// a alterar
vector<Account *> Bank::removeBankOfficer(string name){
	vector<Account *> res;
    for(vector<BankOfficer>::iterator it = bankOfficers.begin() ; it!=bankOfficers.end() ; it++){
        if(it->getName() == name){
            res = it->getAccounts();
            bankOfficers.erase(it);
            break;
        }
    }
    return res;
}


// a alterar
const BankOfficer & Bank::addAccountToBankOfficer(Account *ac, string name) {
    BankOfficer *bo= new BankOfficer();
    for(BankOfficer b1: bankOfficers){
        if(b1.getName() == name){
            b1.addAccount(ac);
            *bo = b1;
            return *bo;
        }
    }

    throw NoBankOfficerException(name);
}

bool compare(Account *a, Account *b){
    if(a->getBalance()<b->getBalance()){return true;}
    else if (a->getBalance()==b->getBalance()){return a->getCodIBAN()<b->getCodIBAN();}
}

// a alterar
void Bank::sortAccounts() {
    sort(accounts.begin(),accounts.end(), compare);
}



