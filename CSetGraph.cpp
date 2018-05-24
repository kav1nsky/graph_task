#include "CSetGraph.h"

CSetGraph::CSetGraph(int _vertice_count) : vertice_count(_vertice_count) {
    adj_set.resize(vertice_count);
}

CSetGraph::CSetGraph(const IGraph *graph) : vertice_count(graph->VerticesCount()) {
    std::vector<int> vertices;
    for (int i = 0; i < vertice_count; i++) {
        graph->GetNextVertices(i, vertices);

        for (auto item: vertices) {
            AddEdge(i, item);
        }
    }
}

CSetGraph::~CSetGraph() {}

int CSetGraph::VerticesCount() const {
    return vertice_count;
}

void CSetGraph::AddEdge(int from, int to) {
    adj_set.at(from).insert(to);
}

void CSetGraph::GetNextVertices(int vertex, std::vector<int> &vertices) const {
    vertices.clear();
    std::copy(adj_set.at(vertex).begin(), adj_set.at(vertex).end(), std::back_inserter(vertices));
}

void CSetGraph::GetPrevVertices(int vertex, std::vector<int> &vertices) const {
    vertices.clear();
    for (int i = 0; i < vertice_count; i++) {
        if (adj_set.at(i).count(vertex)) {
            vertices.push_back(i);
        }
    }
}
