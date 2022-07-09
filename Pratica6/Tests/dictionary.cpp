#include <iostream>
#include <string>
#include <fstream>
#include "dictionary.h"

using namespace std;

WordMean::WordMean(string w, string m): word(w), meaning(m) {}

string WordMean::getWord() const {
    return word;
}

string WordMean::getMeaning() const {
    return meaning;
}

void WordMean::setMeaning(string m) {
    meaning = m;
}

void WordMean::setWord(string w) {
    word = w;
}

bool WordMean::operator<(const WordMean &word1) const {
    return word1.word > this->word;
}

bool WordMean::operator>(const WordMean &word1) const {
    return word1.word < this->word;
}

BST<WordMean> Dictionary::getWords() const {
	return words;
}

// ---------------------------------------------

//TODO
void Dictionary::readFile(ifstream &f) {
    string currentword, stand, currentmean;
    int count = 0;
    while (getline(f, stand)) {
        if (count == 0) {
            currentword = stand;
            count = 1;
        } else {
            currentmean = stand;
            count = 0;
            WordMean cur(currentword, currentmean);
            words.insert(cur);
        }

    }
}

//TODO
string Dictionary::consult(string word1, WordMean& previous, WordMean& next) const {

    BST<WordMean> copy = words;
    iteratorBST<WordMean> it, prev;
    WordMean s(word1, "a");

    for(it = words.begin() ; it!=words.end() ; it++){
        if((*it).getWord() == word1){
            return (*it).getMeaning();
        }
    }
    copy.insert(s);
    for(it = copy.begin(); it!= copy.end(); it++){
        if ((*it).getWord()==s.getWord() && (*it).getMeaning() == s.getMeaning()){
            next = (*(it++));
            break;
        }
        previous = *it;
    }


    return "word not found";
}

//TODO
bool Dictionary::update(string word1, string mean1) {
    WordMean dummy (word1,mean1);
    for (iteratorBST<WordMean> it = words.begin();it != words.end();it++){
        if((*it).getWord()==word1){
            words.remove(*it);
            words.insert(dummy);
            return true;
        }
    }
    words.insert(dummy);
    return false;
}

//TODO
void Dictionary::print() const {
    BST<WordMean> copy = words;

    while(!copy.isEmpty()){
        WordMean cur=copy.findMin();
        cout<<cur.getWord()<<endl<<cur.getMeaning()<<endl;
        copy.remove(cur);
    }
}
