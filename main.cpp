#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    graph G;

    initGraph_103012300156(G);
    buildGraph_103012300156(G);

    adrVertex p = firstVertex(G);
    while(p != nil){
        cout << "Id Vertex : " << idVertex(p) << endl;
        p = nextVertex(p);
    }
    return 0;
}
