#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#define idVertex(P) P->idVertex
#define nextVertex(P) P->nextVertex
#define firstEdge(P) P->firstEdge
#define nextEdge(E) E->nextEdge
#define firstVertex(G) G.firstVertex
#define nil NULL
#include <iostream>

using namespace std;

typedef struct vertex *adrVertex;
typedef struct edge *adrEdge;

typedef struct vertex{
    char idVertex;
    adrVertex nextVertex;
    adrEdge firstEdge;
};

typedef struct edge{
    char idEdge;
    int weight;
    adrEdge nextEdge;
};

typedef struct graph{
    adrVertex firstVertex;
};

void createVertex_103012300156(char vertexId, adrVertex &v);
void initGraph_103012300156(graph &G);
void addVertex_103012300156(graph &G, char newVertexId);
void buildGraph_103012300156(graph &G);


#endif // HEADER_H_INCLUDED
