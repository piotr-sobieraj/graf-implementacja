#pragma once
#include "tests.h"
#include "graph.h""

#include <cassert>



void run_tests(){
    // Sprawdzenie rozmiaru 
    graph g5(5);
    assert(g5.size == 5);

    // Graf nieskierowany
    graph g3(3);
    int values3[] = {1, 1, 1, 
                    1, 0, 2,
                    1, 2, 0};
    g3.set_vortex(values3);
    assert(g3.is_directed() == false);

    //Graf skierowany
    graph g4(4);
    int values4[] = {0, 0, 2, 0,
                     1, 1, 0, 0,
                     0, 0, 0, 0,
                     1, 0, 1, 0};
    g4.set_vortex(values4);    
    assert(g4.is_directed() == true);

    
    
}