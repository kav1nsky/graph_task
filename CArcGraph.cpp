#include "CArcGraph.h"

CArcGraph::CArcGraph(int _vertice_count) : vertice_count(_vertice_count) {
}

CArcGraph::~CArcGraph() {}

int CArcGraph::VerticesCount() const {
    return vertice_count;
}

CArcGraph::CArcGraph(const IGraph* graph) : vertice_count(graph->VerticesCount()) {
    std::vector<int> vertices;
    for (int i = 0; i < vertice_count; i++) {
        graph->GetNextVertices(i, vertices);

        for (auto item: vertices) {
            AddEdge(i, item);
        }
    }
}

void CArcGraph::AddEdge(int from, int to) {
    arc_list.push_back(std::make_pair(from, to));
}

void CArcGraph::GetNextVertices(int vertex, std::vector<int> &vertices) const {
    vertices.clear();
    for (auto arc: arc_list) {
        if (arc.first == vertex) {
            vertices.push_back(arc.second);
        }
    }
}

void CArcGraph::GetPrevVertices(int vertex, std::vector<int> &vertices) const {
    vertices.clear();
    for (auto arc: arc_list) {
        if (arc.second == vertex) {
            vertices.push_back(arc.first);
        }
    }
}