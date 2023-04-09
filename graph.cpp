#include<iostream>
#include "graph.h"
using namespace std;

graph::graph(const int &s){
    this->size = s;
    this -> vortex = new int*[this->size];
    for (int i = 0; i < this->size; i++)
        this->vortex[i] = new int[this->size];
}

void graph::print(){
    cout << endl;
    for (int i = 0; i < this->size; i++){
        
    for (int j = 0; j < this->size; j++)
        cout << vortex[i][j] << "\t";

        cout << endl;
    }
}   

void graph::set_vortex(const int *values){
    for(int i = 0; i < this->size; i++)
        for (int j = 0; j < this->size; j++)
            this->vortex[i][j] = values[i * this->size + j];
}

bool graph::is_directed(){
    for(int i = 0; i < this->size; i++)
        for(int j = 0; j < this->size; j++)
            if(vortex[i][j] != vortex[j][i])
                return true;
    
    return false;
}
