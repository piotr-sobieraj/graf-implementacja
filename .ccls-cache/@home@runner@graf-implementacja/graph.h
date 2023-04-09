#pragma once

class graph{
    public: 
        graph(const int &s);
        void print();
        void set_vortex(const int *values);
        bool is_directed();
        
        int size;
        int **vortex;
};