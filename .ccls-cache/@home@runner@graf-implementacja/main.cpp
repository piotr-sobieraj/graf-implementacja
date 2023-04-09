#include <iostream>
#include "tests.h"
#include "graph.h"

using namespace std;







int main() {
    run_tests();
    
    graph g(3);


    int values[] = {0, 1, 3, 
                    2, 3, 4, 
                    5, 6, 7};
    g.set_vortex(values);

    
    
    
    g.print();
    
    
}