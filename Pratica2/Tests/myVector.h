#include <iostream>
#include <vector>
using namespace std;

template <class T>
class MyVector {
    vector<T> values;
public:
    MyVector();
    ~MyVector();
    void push_back(T v1);
    vector<T> getValues() const;
    T max() const;
    bool hasDuplicates() const;
    void removeDuplicates() ;
};


// exception EmptyVector
class EmptyVector{

};

// methods
template <class T>
MyVector<T>::MyVector() {}

template <class T>
MyVector<T>::~MyVector() {}

template <class T>
void MyVector<T>::push_back(T v1) {
    values.push_back(v1);
}

template <class T>
vector<T> MyVector<T>::getValues() const {
    return values;
}

//---------------------------------

// TODO
template <class T>
T MyVector<T>::max() const {

    if (values.size()==0){
        throw EmptyVector();
    }
    T vmax=values[0];
    for (int i=0; i<values.size(); i++){
        if (vmax<values[i]){
            vmax = values[i];
        }
    }
	return vmax;
}

// TODO
template<class T>
bool MyVector<T>::hasDuplicates() const {
    for (int i=0; i<values.size(); i++){
        for (int j=0; j<values.size(); j++){
            if (values[i]==values[j] && i!=j){return true;}
        }
    }
	return false;
}

// TODO
template<class T>
void MyVector<T>::removeDuplicates() {
    if(!hasDuplicates()){return;} //verificar se existem duplicados a eliminar
    for (int i=0; i<values.size(); i++){
        for (int j=0; j<values.size(); j++){
            if (values[i]==values[j] && i!=j){
                values.erase(values.begin()+j);
            }
        }
    }
}

