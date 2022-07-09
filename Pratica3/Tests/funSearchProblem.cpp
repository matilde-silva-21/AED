#include "funSearchProblem.h"

FunSearchProblem::FunSearchProblem() {}

//-----------------------------------------------------------------

// TODO
int FunSearchProblem::facingSun(const vector<int> & values) {
    int final=1;
    for (int i=1;i<values.size();i++){
        if(values[i]>values[i-1]){final++;}
    }
    return final;
}

// TODO
int FunSearchProblem::squareR(int num) {

    int uplimit=num, lowlimit = 0;
    for(int i=0; i<num ;i++){

        if (num == lowlimit*lowlimit){return lowlimit;}

        else if (num==uplimit*uplimit){return uplimit;}

        if(num>(lowlimit*lowlimit) && num <(((lowlimit+uplimit)/2)*((lowlimit+uplimit)/2))){
            uplimit=(lowlimit+uplimit)/2;
        }

        else{lowlimit = (lowlimit+uplimit)/2;}
    }

    return lowlimit;
}

// TODO


void BubbleSortAndPop(vector<int> &values){

    int count=1;
    while(count!=0){
        count=0;
        for(int i=0; i<values.size()-1; i++){
            if (values[i]<=0) {values.erase(values.begin()+i); continue;}
            else if (values[i]>values[i+1]){
                int copy = values[i];
                values[i]=values[i+1];
                values[i+1]=copy;
                count++;
            }
        }
    }
}

int FunSearchProblem::smallestMissingValue(const vector<int> & values) {

    vector<int> fred = values;
    BubbleSortAndPop(fred);
    if (fred.empty()){return 0;}
    else if (fred[0]!=1){return fred[0]-1;}

    for (int i=0;i<fred.size();i++){
        if(fred[i]+1 != fred[i+1]){return fred[i]+1;}
    }

    return fred[fred.size()-1]+1;

}




// TODO
int FunSearchProblem::minPages(const vector<int> & values, int numSt) {
    return 0;
}

