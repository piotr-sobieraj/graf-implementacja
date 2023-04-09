#include <iostream>
#include<cassert>
using namespace std;

class graph{
    public: 
        graph(const int &s){
            this->size = s;
            this -> vortex = new int*[this->size];
            for (int i = 0; i < this->size; i++)
                this->vortex[i] = new int[this->size];
        }

        void print(){
            cout << endl;
            for (int i = 0; i < this->size; i++){
                
            for (int j = 0; j < this->size; j++)
                cout << vortex[i][j] << "\t";
    
                cout << endl;
            }
        }   

        void set_vortex(const int *values){
            for(int i = 0; i < this->size; i++)
                for (int j = 0; j < this->size; j++)
                    this->vortex[i][j] = values[i * this->size + j];
        }

        bool is_directed(){
            for(int i = 0; i < this->size; i++)
                for(int j = 0; j < this->size; j++)
                    if(vortex[i][j] != vortex[j][i])
                        return true;
            
            return false;
        }
        
    int size;
    int **vortex;
};


void run_tests(){
    // Sprawdzenie rozmiaru 
    graph g1(5);
    assert(g1.size == 5);

    // Graf nieskierowany
    graph g2(3);
    int values[] = {1, 1, 1, 
                    1, 0, 1,
                    1, 1, 0};
    assert(g2.is_directed() == true);
}


int main() {
    run_tests();
    
    graph g(3);


    int values[] = {0, 1, 3, 
                    2, 3, 4, 
                    5, 6, 7};
    g.set_vortex(values);

    
    
    
    g.print();
    
    
}