#pragma once
#include "tests.h"
#include "graph.h"

#include <cassert>
#include<iostream>



void run_tests(){
    std::cout << "Start testów!";
    // Sprawdzenie rozmiaru 
    graph g5(5);
    assert(g5.size == 5);

    // Graf nieskierowany
    graph g3(3);
    int values3[] = {1, 1, 1, 
                     1, 0, 2,
                     1, 2, 0};
    g3.set_vortex(values3);
        
        // Is_directed/skierowany
        assert(g3.is_directed() == false);

        // Liczba krawędzi
        assert(g3.edge_count() == 5);

        // Liczba wierzchołków
        assert(g3.vortex_count() == 3);      

        // Stopień wejściowy wierzchołka 0
        bool thrown = false;
        try{
            g3.degin(0);            
        }
        catch(const std::invalid_argument){
            thrown = true;
        }
        assert(thrown);

        // Stopień wejściowy wierzchołka 0
        bool thrown1 = false;
        try{
            g3.degout(0);            
        }
        catch(const std::invalid_argument){
            thrown1 = true;
        }
        assert(thrown1);
        
        
        // Stopień wierzchołków
        assert(g3.deg(0) == 3);
        assert(g3.deg(1) == 3);
        assert(g3.deg(2) == 3);
        
    

    //Graf skierowany
    graph g4(4);
    int values4[] = {0, 0, 2, 0,
                     1, 1, 0, 0,
                     0, 0, 0, 0,
                     1, 0, 1, 0};
    g4.set_vortex(values4);    

        //Skierowany/nieskierowany
        assert(g4.is_directed() == true);

        // Liczba krawędzi
        assert(g4.edge_count() == 6);

        // Liczba wierzchołków
        assert(g4.vortex_count() == 4);    

        // Stopień wejściowy wierzchołków
        assert(g4.degin(0) == 2);
        assert(g4.degin(1) == 1);
        assert(g4.degin(2) == 3);
        assert(g4.degin(3) == 0);

        // Stopień wyjściowy wierzchołków
        assert(g4.degout(0) == 2);
        assert(g4.degout(1) == 2);
        assert(g4.degout(2) == 0);
        assert(g4.degout(3) == 2);

        // Stopień wierzchołków
        assert(g4.deg(0) == 4);
        assert(g4.deg(1) == 3);
        assert(g4.deg(2) == 3);
        assert(g4.deg(3) == 2);
    
            
    
    std::cout << std::endl << "Testy zakończone pomyślnie :)";    
}