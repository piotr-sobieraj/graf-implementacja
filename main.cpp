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
        
    int size;
    int **vortex;
};


void run_tests(){
    
}


int main() {
    graph g(3);


    int values[] = {0, 1, 3, 
                    2, 3, 4, 
                    5, 6, 7};
    g.set_vortex(values);

    
    
    
    g.print();
    
    
}