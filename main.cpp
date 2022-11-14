/*
*  autor: Hossue E. Ceja Cartagena
*  fecha: 10/13/2022
*/

#include <iostream>
#include <cstring>
#include "graph.h"

using namespace std;

int main(int argc, char* argv[]) {

    Graph h;
    Graph star;

    string h_ans, h_ans_2;
    string star_ans, star_ans_2;

    h.loadGraphList("h.txt", 7, 7);
    star.loadGraphList("star.txt", 5, 5);

    h.loadGraphMat("h.txt", 7, 7);
    star.loadGraphMat("star.txt", 5, 5);

    //h.DFS(0,3);
    h_ans = "visited: 0 4 5 1 3 path: 0 1 3";
    h_ans_2 = "visited: 0 1 2 3 path: 0 1 3";
    cout << "\n" <<"1.- esperada 1 " << h_ans << "\n esperada 2 " << h_ans_2 <<"\n programa " << h.DFS(0,3) << "\n";

    //star.DFS(0,3);
    star_ans = "visited: 0 4 3 path: 0 4 3";
    star_ans_2 = "visited: 0 1 2 3 path: 0 1 2 3";
    cout << "\n" <<"2.- esperada 1 " << star_ans << "\n esperada 2 " << star_ans_2 <<"\n programa " << star.DFS(0,3) << "\n";

    //h.BFS(0,3);
    h_ans = "visited: 0 1 4 2 3 path: 0 1 3";
    h_ans_2 = "visited: 0 4 1 5 3 path: 0 1 3";
    cout << "\n" <<"3.- esperada 1 " << h_ans << "\n esperada 2 " << h_ans_2 <<"\n programa " << h.BFS(0,3) << "\n";

    //star.BFS(0,3);
    star_ans = "visited: 0 1 2 3 path: 0 3";
    star_ans_2 = "visited: 0 4 3 path: 0 3";
    cout << "\n" <<"4.- esperada 1 " << star_ans << "\n esperada 2 " << star_ans_2 <<"\n programa " << star.BFS(0,3) << "\n";

    //h.printAdjMat()
    h_ans = "0 1 0 0 1 0 0 1 0 1 1 0 0 0 0 1 0 0 0 0 0 0 1 0 0 0 0 1 1 0 0 0 0 1 0 0 0 0 0 1 0 0 0 0 0 1 0 0 0 ";
    cout << "\n" <<"5.- esperada " << h_ans << "\n programa " << h.printAdjMat() << "\n";

    //star.printAdjMat()
    star_ans ="0 1 1 1 1 1 0 1 1 1 1 1 0 1 1 1 1 1 0 1 1 1 1 1 0 ";
    cout << "\n" <<"6.- esperada " << star_ans << "\n programa " << star.printAdjMat() << "\n";

    
    h_ans ="vertice 0 : 1 4 vertice 1 : 0 2 3 vertice 2 : 1 vertice 3 : 1 6 vertice 4 : 0 5 vertice 5 : 4 vertice 6 : 3 ";
    cout << "\n" <<"7.- esperada " << h_ans << "\n programa " << h.printAdjList() << "\n";

    //star.printAdjList()
    star_ans="vertice 0 : 1 2 3 4 vertice 1 : 0 2 3 4 vertice 2 : 0 1 3 4 vertice 3 : 0 1 2 4 vertice 4 : 0 1 2 3 ";
    cout << "\n" <<"8.- esperada " << star_ans << "\n programa " << star.printAdjList() << "\n";



}