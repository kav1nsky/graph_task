#include <iostream>
#include "CMatrixGraph.h"
#include "CSetGraph.h"
#include "CListGraph.h"
#include "CArcGraph.h"

int main() {
    CMatrixGraph *graph = new CMatrixGraph(7);

    for (int i = 0; i < 7; i++) {
        graph->AddEdge(i, i);
    }

    std::vector<int> v;
    graph->GetNextVertices(1, v);
    for (auto item: v) std::cout << item;
    CArcGraph *graph1 = new CArcGraph(graph);
    for (auto item: v) std::cout << item;
    return 0;
}