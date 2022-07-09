/*
 * Purchase.cpp
 *
 *  Created on: Nov 16, 2016
 *      Author: hlc
 */

#include "Purchase.h"

using namespace std;

Purchase::Purchase(long cli) : client (cli) {
}

long Purchase::getClient() const {
	return client;
}

list< stack<Article*> > Purchase::getBags() const {
	return bags;
}

/**
 * Create an Article associated with the client of this purchase.
 */
Article* Purchase::createArticle(long barCode, bool present, bool deliverHome) {

	// TODO
    Article *c = new Article(client,barCode);
    c->setPresent(present);
    c->setDeliverHome(deliverHome);
	return c;

}

/**
 * Add an Article to the bags of this purchase. A new bag is added when the last bag is full.
 */
void Purchase::putInBag(Article* article) {

    for(auto it = bags.begin() ; it != bags.end() ; it++){
        if(it->size() >= BAG_SIZE){
            std::stack<Article*> c;
            c.push(article);
            bags.push_back(c);
            return;
        }
        else{
            it->push(article);
            return;
        }
    }

}

/**
 * Pop from the bags all articles that are presents.
 * All other articles are pushed back into the bags where they were, maintaining order.
 */
vector<Article*> Purchase::popPresents() {

	// TODO

	vector<Article*> presents;

    for(auto it = bags.begin(); it != bags.end(); it++){
        std::vector<Article*> temp;
        std::stack<Article*> te;
        while (!it->empty()){
            if(it->top()->getPresent() ){presents.push_back(it->top()); it->pop();}
            else{
                temp.push_back(it->top());
                it->pop();
            }
        }
        for(int i=temp.size()-1; i >= 0; i--){
            te.push(temp[i]);
        }
        *it = te;
    }
	return presents;

}

