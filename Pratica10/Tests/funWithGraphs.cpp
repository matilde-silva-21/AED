// AED 2021/2022 - Aula Pratica 10
// Pedro Ribeiro (DCC/FCUP) [09/01/2022]

#include "funWithGraphs.h"
#include "graph.h"

#include <vector>
#include <iostream>
#include <algorithm>


// ----------------------------------------------------------
// Some Example Graphs
// ----------------------------------------------------------

Graph FunWithGraphs::graph1() {
    Graph g(7, false);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 4, 3);
    g.addEdge(2, 4, 6);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 5, 8);
    g.addEdge(3, 6, 12);
    g.addEdge(3, 7, 11);
    g.addEdge(4, 5, 9);
    g.addEdge(4, 6, 5);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7,10);
    return g;
}

Graph FunWithGraphs::graph2() {
    Graph g(9, false);
    g.addEdge(1,2, 16);
    g.addEdge(1,4, 3);
    g.addEdge(1,5, 8);
    g.addEdge(2,3, 12);
    g.addEdge(2,5, 15);
    g.addEdge(2,6, 1);
    g.addEdge(3,6, 10);
    g.addEdge(4,5, 9);
    g.addEdge(4,7, 7);
    g.addEdge(5,6, 6);
    g.addEdge(5,7, 5);
    g.addEdge(5,8, 2);
    g.addEdge(6,8, 14);
    g.addEdge(6,9, 4);
    g.addEdge(7,8, 13);
    g.addEdge(8,9, 11);
    return g;
}

Graph FunWithGraphs::graph3() {
    Graph g(11, false);
    g.addEdge(1, 2, 2);
    g.addEdge(1, 7, 1);
    g.addEdge(2, 3, 4);
    g.addEdge(2, 8, 3);
    g.addEdge(3, 8, 3);
    g.addEdge(3, 4, 4);
    g.addEdge(4, 5, 3);
    g.addEdge(4, 6, 1);
    g.addEdge(4, 8, 5);
    g.addEdge(5, 10, 2);
    g.addEdge(6, 10, 3);
    g.addEdge(6, 11, 5);
    g.addEdge(7, 8, 5);
    g.addEdge(7, 9, 2);
    g.addEdge(8, 9, 1);
    g.addEdge(9, 10, 7);
    g.addEdge(9, 11, 3);
    g.addEdge(10, 11, 5);
    return g;
}

Graph FunWithGraphs::graph4() {
    Graph g(4, false);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 3, 6);
    g.addEdge(1, 4, 3);
    g.addEdge(2, 3, 5);
    g.addEdge(2, 4, 9);
    g.addEdge(3, 4, 8);
    return g;
}

// ------------------------------------------------------------------------

// ----------------------------------------------------------
// Exercicio 2: Heaps Binários
// ----------------------------------------------------------

// ..............................
// a) Um pequeno jogo
// TODO
bool compare(int nr1, int nr2){
    int m,sum1=0, sum2=0;
    while(nr1>0)
    {
        m=nr1%10;
        sum1=sum1+m;
        nr1=nr1/10;
    }
    while(nr2>0)
    {
        m=nr2%10;
        sum2=sum2+m;
        nr2=nr2/10;
    }
    return sum2>sum1;
}
int FunWithGraphs::game(const vector<int>& v) {
    vector<int> copy = v;
    int small1=*copy.begin(), small2=*copy.begin();
    while(copy.size()!=1){
        sort(copy.begin(),copy.end(),compare);
        small1=*copy.begin();
        small2=*(++copy.begin());
        int sub = abs( small1-small2 );
        copy.erase(copy.begin());
        copy.erase(copy.begin());
        copy.push_back(sub);
    }

    return *copy.begin();
}

// ----------------------------------------------------------
// Exercicio 6: Uma cidade "quadriculada"
// ----------------------------------------------------------
// TODO
int FunWithGraphs::gridCity(const vector<pair<int, int>>& plants, const vector<pair<int, int>>& houses) {
    return 0;
}

