#include "CListGraph.h"

CListGraph::CListGraph(int _vertice_count) : vertice_count(_vertice_count) {
    adj_list.resize(vertice_count);
}

CListGraph::CListGraph(const IGraph *graph) : vertice_count(graph->VerticesCount()) {
    std::vector<int> vertices;
    for (int i = 0; i < vertice_count; i++) {
        graph->GetNextVertices(i, vertices);

        for (auto item: vertices) {
            AddEdge(i, item);
        }
    }
}

CListGraph::~CListGraph() {}

int CListGraph::VerticesCount() const {
    return vertice_count;
}

void CListGraph::AddEdge(int from, int to) {
    adj_list.at(from).push_back(to);
}

void CListGraph::GetNextVertices(int vertex, std::vector<int> &vertices) const {
    vertices.clear();
    std::copy(adj_list.at(vertex).begin(), adj_list.at(vertex).end(), std::back_inserter(vertices));
}

void CListGraph::GetPrevVertices(int vertex, std::vector<int> &vertices) const {
    vertices.clear();
    for (int i = 0; i < vertice_count; i++) {
        for (auto item: adj_list.at(i)) {
            if (item == vertex) {
                vertices.push_back(item);
            }
        }
    }
}

