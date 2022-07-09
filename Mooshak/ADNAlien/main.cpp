#include <iostream>
#include <map>
#include "string"
#include "algorithm"
#include <vector>
#include <tuple>

bool compare(std::tuple<char, int, int>& a, std::tuple<char, int, int>& b){
    if(std::get<1>(a) > std::get<1>(b)){return true;}
    else if(std::get<1>(a) == std::get<1>(b)) {return std::get<2>(a) < std::get<2>(b);}
    return false;
}


int main() {
    std::string dna;
    getline(std::cin,dna);

    std::map<char , int> final;
    std::map<char,int>::iterator it;

    for(char k : dna){
        if ((it = final.find(k))!=final.end()){
            final[it->first]++;
        }
        else{
            final.insert ( std::pair<char,int>(k,1) );
        }

    }

    std::vector<std::tuple<char,int,int>> robert;

    for (it =final.begin();it!=final.end();it++){
        robert.push_back(std::make_tuple(it->first,it->second, dna.find(it->first)));
    }

    std::sort(robert.begin(), robert.end(), &compare);

    for (std::tuple<char,int,int> greg : robert){
        std::cout<<std::get<0>(greg)<<" "<<std::get<1>(greg)<<std::endl;
    }


    return 0;
}
