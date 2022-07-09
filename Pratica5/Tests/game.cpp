#include "game.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;


unsigned int Game::numberOfWords(string phrase) {
  if ( phrase.length() == 0 ) return 0;

  unsigned n=1;
  size_t pos = phrase.find(' ');
  while (pos != string::npos) {
    phrase = phrase.substr(pos+1);
    pos = phrase.find(' ');
    n++;
  }
  return n;
}

Game::Game() {
	this->kids.clear();
}

Game::Game(list<Kid>& l2) {
	this->kids = l2;
}

//-----------------------------------------------------------------

// TODO
void Game::addKid(const Kid k1) {
    kids.push_back(k1);
}

// TODO
list<Kid> Game::getKids() const {
    return kids;
}

// TODO
void Game::setKids(const list<Kid>& l1) {
    this->kids=l1;
}

// TODO
Kid Game::loseGame(string phrase) {
    unsigned int n = numberOfWords(phrase);
    list<Kid>::iterator it = kids.begin();

    while(kids.size() != 1){
        it = kids.begin();
        //if(it==kids.end()){it = kids.begin();}
        for(int i=1; i<n; i++){
            //cout<<"current kid is: "<<it->getName()<<endl;
            it++;
            if(it==kids.end()){it = kids.begin();}
        }
        //cout<<"saved kid is: "<<it->getName()<<endl;
        kids.erase(it);
    }

    return kids.front();
}

// TODO
list<Kid> Game::removeOlder(unsigned id) {
    list<Kid> reject;
    for(auto it = kids.begin() ; it!=kids.end() ; it++){
        if(it->getAge()>id){reject.push_back(*it); kids.erase(it);}
    }
    return reject;
}

// TODO
queue<Kid> Game::rearrange() {
    return(queue<Kid>());
}

// TODO
bool Game::operator==(Game& g2) {
    auto it = kids.begin();
	for(Kid k1: g2.kids){
        if(k1 == *it){}
    }
}

// TODO
list<Kid> Game::shuffle() const {
	return (list<Kid>());
}
