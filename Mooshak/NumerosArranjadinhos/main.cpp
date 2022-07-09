#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <map>
#include <sstream>
#include <math.h>


int main() {

    std::string n;
    std::vector<std::tuple<std::string,std::string>> gregory;
    std::string current,empty,n1,n2;

    std::getline(std::cin, n);
    int n3 = std::stoi(n);

    for (int j=0; j<n3; j++) {
        int count = 0;
        std::getline(std::cin, current);
        std::stringstream walter(current);

        while (walter >> empty) {
            if (count == 0) {
                n1 = empty;
                count++;
            } else { n2 = empty; }
        }
        gregory.emplace_back(n1,n2);
    }

    std::vector<long long> final;


    for(std::tuple<std::string,std::string> samuel: gregory){
        std::string jackson=std::get<0>(samuel);
        std::string trevor=std::get<1>(samuel);



        for(long long i = std::stoll(jackson)+1; i<(std::stoll(jackson)+ pow(10,18)); i++){

            int walter=0;
            for (char lonesome: std::to_string(i)){
                std::string temp(1,lonesome);
                walter+= std::stoi(temp);
            }

            if (walter == std::stoll(trevor)){
                final.push_back(i);
                break;
            }
        }

    }

    for(long long i: final){std::cout << i << std::endl;}
}
