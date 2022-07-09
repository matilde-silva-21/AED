#include <iostream>
#include <string>
#include <sstream>

int main() {


    int final=0;
    std::string currents;
    std::getline(std::cin, currents);
    int n=std::stoi(currents);

    for(int i=0;i<n;i++){
        std::getline(std::cin,currents);
        try{
            if(std::stoi(currents)==42){final++;}
        }
        catch(...){continue;}
    }


    std::cout<<final<<std::endl;


    return 0;
}
