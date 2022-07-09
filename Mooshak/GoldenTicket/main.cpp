#include <iostream>
#include <numeric>
#include <list>
#include "vector"
#include "algorithm"

int main() {
    int numbertick,elfactor,breaker,count=0;
    std::string cur;
    getline(std::cin,cur);
    numbertick = std::stoi(cur);
    getline(std::cin,cur);
    elfactor = std::stoi(cur);
    getline(std::cin,cur);
    breaker = std::stoi(cur);

    std::cout << "chegamos aqui "<<numbertick<<" "<<elfactor<<" "<<breaker<<std::endl;

    std::vector<int> players (numbertick);
    std::iota(players.begin(), players.end(), 0);
    std::vector<int> copy = players;



    while(players.size() != 2){
        for (auto it = players.begin()+2 ; it!=players.end(); it++){
            for(int i = 0; i<elfactor-2;i++){it++;}
            std::cout<<"copy: "<<*it<<std::endl;
            copy.erase(it);
        }

        std::cout<<"fodeu"<<std::endl;
    }

    /*
    if(breaker){std::cout<<players[0]<<std::endl;}
    else{std::cout<<players[1]<<std::endl;}*/
    return 0;
}
