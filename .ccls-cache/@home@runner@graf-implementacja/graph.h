#pragma once

class graph{
    public: 
        graph(const int &s);
        void print();
        void set_vortex(const int*);
        bool is_directed();
        unsigned int edge_count();
        unsigned int vortex_count();

        unsigned int degin(const int&);
        unsigned int degout(const int&);     
        unsigned int deg(const int&);    
        
        int size;
        int **vortex;
};