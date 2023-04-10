#include<iostream>
#include "graph.h"
using namespace std;

template <typename T>
int sgn(T value) {
    return (T(0) < value) - (value < T(0));
}


graph::graph(const int& s){
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


void graph::set_vortex(const int* values){
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


unsigned int graph::edge_count(){
    unsigned int s = 0;

    if (this->is_directed()){
        for(int i = 0; i < this->size; i++)
            for(int j = 0; j < this->size; j++)
                s += this->vortex[i][j];
    }
    else {
        for(int i = 0; i < this->size; i++)
            for(int j = i; j < this->size; j++)
                s += this->vortex[i][j];
    }
    
    return s;        
}


unsigned int graph::vortex_count(){
    unsigned int s = 0;

    if(this->is_directed()){
        for(int i = 0; i < this->size; i++)
            for(int j = 0; j < this->size; j++)
                if (i != j)                
                    s += sgn(this->vortex[i][j]);
    }
    else{
        for(int i = 0; i < this->size; i++)
            for(int j = i + 1; j < this->size; j++)
                s += sgn(this->vortex[i][j]);        
    }
        
    return s;  
}


unsigned int graph::degin(const int& i){
    if (!this -> is_directed())
        throw std::invalid_argument("Wywołano degin dla grafu nieskierowanego.");
    
    unsigned int deg = 0;
    
    for(int j = 0; j < this->size; j++)
        deg += this->vortex[j][i];

    return deg;    
}


unsigned int graph::degout(const int& i){
    if (!this -> is_directed()){
        throw std::invalid_argument("Wywołano degout dla grafu nieskierowanego.");        
    }
        
    unsigned int deg = 0;
    
    for(int j = 0; j < this->size; j++)
        deg += this->vortex[i][j];
        
    return deg;    
}


unsigned int graph::deg(const int& i){
    if(this -> is_directed())
    {
        return degin(i) + degout(i);
    }
    else
    {
        unsigned int deg = 0;
        for(int j = 0; j < this->size; j++)
            deg += this->vortex[i][j];

        return deg;
    }
}

