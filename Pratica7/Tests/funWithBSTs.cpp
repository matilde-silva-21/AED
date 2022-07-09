// AED 2021/2022 - Aula Pratica 07
// Pedro Ribeiro (DCC/FCUP) [06/12/2021]

#include <set>
#include <algorithm>
#include <map>
#include "funWithBSTs.h"
#include "bst.h"

// ----------------------------------------------------------
// Exercicio 1: Colecao de Cromos
// ----------------------------------------------------------
// TODO
int FunWithBSTs::newBag(const vector<int>& collection, const vector<int>& bag) {
    set<int> aux (collection.begin(),collection.end());
    int first = aux.size();
    aux.insert(bag.begin(),bag.end());
    int second = aux.size();

    return second-first;

}

// ----------------------------------------------------------
// Exercicio 2: Batalha de Pokemons
// ----------------------------------------------------------
// TODO

int FunWithBSTs::battle(const vector<int>& alice, const vector<int>& bruno) {

    multiset<int> alice1(alice.begin(),alice.end()), bruno1(bruno.begin(),bruno.end());

    while(!alice1.empty() && !bruno1.empty()){

        multiset<int>::iterator a = max_element(alice1.begin(),alice1.end()), b= max_element(bruno1.begin(),bruno1.end());
        if((*a)>(*b)){
            int nue = *a-*b;
            bruno1.erase(b);
            alice1.erase(a);
            alice1.insert(nue);
        }

        else if((*a)<(*b)){
            int nue = *b-*a;
            bruno1.erase(b);
            alice1.erase(a);
            bruno1.insert(nue);
        }

        else{
            bruno1.erase(b);
            alice1.erase(a);
        }

    }

    if(!alice1.empty() && bruno1.empty()){return alice1.size();}
    else if(!bruno1.empty() && alice1.empty()){return -bruno1.size();}
    else return 0;
}

// ----------------------------------------------------------
// Exercicio 3: Reviews Cinematograficas
// ----------------------------------------------------------

// ..............................
// a) Contando Filmes
// TODO
int FunWithBSTs::numberMovies(const vector<pair<string, int>>& reviews) {
  set<string> s;
  for(pair<string, int> v: reviews){
      s.insert(v.first);
  }
  return s.size();
}

// ..............................
// b) O filme com mais reviews
// TODO
void FunWithBSTs::moreReviews(const vector<pair<string, int>>& reviews, int& m, int& n) {
    m=0, n=0;
    std::multimap<string,int> fake(reviews.begin(),reviews.end());
    set<string> s;
    for(auto it=fake.begin();it!=fake.end();it++){
        if(m<fake.count(it->first)) m=fake.count(it->first);
    }

    for(auto it=fake.begin();it!=fake.end();it++){
        if(m==fake.count(it->first)) s.insert(it->first);
    }
    n = s.size();
}

// ..............................
// c) Os melhores filmes
// TODO
vector<string> FunWithBSTs::topMovies(const vector<pair<string, int>>& reviews, double k) {
    std::multimap<basic_string<char>,int> fake(reviews.begin(),reviews.end());
    set<string> s;
    for(auto it=fake.begin();it!=fake.end();it++){
        float count = 0, ave=0;
        std::pair <std::multimap<string,int>::iterator, std::multimap<string,int>::iterator> ret;
        ret = fake.equal_range(it->first);

        for(auto it2=ret.first; it2!=ret.second; ++it2){
            ave+=it2->second;
            count++;
        }

        if(float(ave/count) >= k){s.insert(it->first);}
    }

    vector<string> answer(s.begin(), s.end());
    return answer;
}
