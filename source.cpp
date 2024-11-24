#include <iostream>
#include "header.h"

using namespace std;

void createVertex_103012300156(char vertexId, adrVertex &v){
    v = new vertex;
    idVertex(v) = vertexId;
    firstEdge(v) = nil;
    nextVertex(v) = nil;
};

void initGraph_103012300156(graph &G){
    firstVertex(G) = nil;
};

void addVertex_103012300156(graph &G, char newVertexId){
    adrVertex v;
    createVertex_103012300156(newVertexId,v);
    if(firstVertex(G) == nil){
        firstVertex(G) = v;
    }else{
        adrVertex q = firstVertex(G);
        while(nextVertex(q) != nil){
            q = nextVertex(q);
        }
        nextVertex(q) = v;
    }
};

void buildGraph_103012300156(graph &G){
    char input;
    cin >> input;
    while(input >= 'A' && input <= 'Z'){
        adrVertex p = firstVertex(G);
        if(firstVertex(G) == nil){
            addVertex_103012300156(G,input);
        }else{
            bool isUnique = true;
            while(p != nil){
                if(idVertex(p) == input){
                    isUnique = false;
                    break;
                }
                p = nextVertex(p);
            }

            if(isUnique){
                addVertex_103012300156(G,input);
            }
            cin >> input;
        }

    }
};
