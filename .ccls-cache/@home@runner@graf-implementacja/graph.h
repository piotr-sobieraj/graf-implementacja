#pragma once

class graph{
    public: 
        graph(const int &s);
        void print();
        void set_vortex(const int *values);
        bool is_directed();
        unsigned int edge_count();
        unsigned int vortex_count();

        unsigned int *degin(const int &i);
        unsigned int *degout(const int &j);     
        unsigned int deg(const int &j);     

        
        int size;
        int **vortex;
};