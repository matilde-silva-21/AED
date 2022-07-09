#include "funSortProblem.h"
#include <algorithm>

FunSortProblem::FunSortProblem() {}


//-----------------------------------------------------------------

bool FunSortProblem::compare(Product &one, Product &two){
    if(one.getPrice()>two.getPrice()){return false;}
    else if (one.getPrice()==two.getPrice()){
        if(one.getWeight()>two.getWeight()){return false;}
    }
    return true;
}

// TODO
void FunSortProblem::expressLane(vector<Product> &products, unsigned k) {

    vector<Product> final;
    sort(products.begin(),products.end(), &compare);



    for(int i=k;i<products.size();i++){
        products.erase(products.begin()+i);
    }

}

// TODO

int FunSortProblem::minDifference(const vector<unsigned> &values, unsigned nc) {

    if(nc > values.size()){return -1;}
    vector<unsigned> copy = values, final;
    sort(copy.begin(),copy.end());

    for(int i=0; i<copy.size()-nc+1;i++){
        final.push_back(copy[i+nc-1]-copy[i]);
    }

    return *min_element(final.begin(),final.end());
}


// TODO
unsigned FunSortProblem::minPlatforms (const vector<float> &arrival, const vector<float> &departure) {

    vector<float> copy1=arrival,copy2=departure;
    sort(copy1.begin(),copy1.end());
    sort(copy2.begin(),copy2.end());
    unsigned count=0;


    for(float i : copy1){
        vector<float>::iterator it = find(copy2.begin(),copy2.end(), i);
        if(it!=copy2.end()){count++;}

    }
    return count;
}


// TODO

void FunSortProblem::nutsBolts(vector<Piece> &nuts, vector<Piece> &bolts) {

}



