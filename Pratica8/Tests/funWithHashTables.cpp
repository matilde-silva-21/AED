// AED 2021/2022 - Aula Pratica 08
// Pedro Ribeiro (DCC/FCUP) [12/12/2021]

#include "funWithHashTables.h"
#include "hashTable.h"

#include <utility>
#include <vector>
#include <iostream>
#include <cctype>
#include <set>
#include <map>
#include <cstring>
#include <algorithm>    // std::find
#include<bits/stdc++.h>


// Exemplo de função de hash para ints
unsigned FunWithHashTables::hashInt(const int& i) {
  return i;
}

// Exemplo de função de hash para strings
unsigned FunWithHashTables::hashString(const string& s) {
  hash<string> h;
  return h(s);
}

// ----------------------------------------------------------
// Exercicio 1: Tabelas de Dispersão
// ----------------------------------------------------------

// ..............................
// d) Contando diferentes somas de pares
// TODO
int FunWithHashTables::sumPairs(const vector<int>& numbers) {
  set<int> aux;
  for(int i=0; i<numbers.size(); i++){
    for(int j = i+1; j<numbers.size(); j++){
      aux.insert(numbers[i]+numbers[j]);
    }
  }
  return aux.size();
}

// ----------------------------------------------------------
// Exercicio 2: Um padrão no DNA
// ----------------------------------------------------------
// TODO
int FunWithHashTables::dnaMotifs(string dna, int k, unordered_set<string>& motifs) {
    std::map<string, int> aux;
    int max=0;
    for(int i=0; i<dna.length()-k+1 ; i++){
        string sub = dna.substr(i, k);
        cout << endl<<sub<<endl;
        if(aux.find(sub)!=aux.end()) aux[sub]++;
        else{aux[sub]=1;}
    }
    for(auto it = aux.begin(); it!=aux.end() ; it++){
        if(it->second > max) {max = it->second; motifs.clear(); motifs.insert(it->first);}
        else if(it->second == max){motifs.insert(it->first);}
    }
    return max;
}

// ----------------------------------------------------------
// Exercicio 3: Torre de Babel
// ----------------------------------------------------------
// TODO
vector<string> separateandlower(string& crux){
    vector<string> final;
    string alph="abcdefghijklmnopqrstuvwxyz";
    transform(crux.begin(), crux.end(), crux.begin(), ::tolower);
    string word;
    for(char i: crux){
        string c(1,i);
        if(find(alph.begin(), alph.end(), i) != alph.end()){word.append(c);}
        else{
            if(!word.empty()){final.push_back(word); word="";}
        }
    }
    final.push_back(word);
    return final;
}

void FunWithHashTables::findLanguage(string text, const unordered_map<string, vector<string>>& dict, unordered_map<string, int>& answer) {
    for(auto it = dict.begin(); it!=dict.end(); it++){
        answer[it->first]=0;
    }
    vector<string> final = separateandlower(text);
    for(string& aux: final)
    {
        for(auto it = dict.begin(); it!=dict.end(); it++){
            auto it1 = std::find(it->second.begin(), it->second.end(), aux);
            if(it1!=it->second.end()){
                answer[it->first]++;
            }

        }
    }
}



// ----------------------------------------------------------
// Exercicio 4: Palavras Alienígenas
// ----------------------------------------------------------
// TODO
void FunWithHashTables::wordIndex(const vector<string> &words, vector<int>& answer) {


}
