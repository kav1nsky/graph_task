#include "CMatrixGraph.h"

CMatrixGraph::CMatrixGraph(int _vertice_count) : vertice_count(_vertice_count) {
    matrix.resize(vertice_count);
    for (int i = 0; i < vertice_count; i++) {
        matrix[i].resize(vertice_count, 0);
    }
}

CMatrixGraph::CMatrixGraph(const IGraph* graph) : vertice_count(graph->VerticesCount()) {
    std::vector<int> vertices;
    for (int i = 0; i < vertice_count; i++) {
        graph->GetNextVertices(i, vertices);

        for (auto item: vertices) {
            AddEdge(i, item);
        }
    }
}

CMatrixGraph::~CMatrixGraph() {}

int CMatrixGraph::VerticesCount() const {
    return vertice_count;
}

void CMatrixGraph::AddEdge(int from, int to) {
    matrix.at(from).at(to) = 1;
}

void CMatrixGraph::GetNextVertices(int vertex, std::vector<int> &vertices) const{
    vertices.clear();
    for (int i = 0; i < vertice_count; i++) {
        if (matrix.at(vertex).at(i)) {
            vertices.push_back(i);
        }
    }
}

void CMatrixGraph::GetPrevVertices(int vertex, std::vector<int> &vertices) const{
    vertices.clear();
    for (int i = 0; i < vertice_count; i++) {
        if (matrix.at(i).at(vertex)) {
            vertices.push_back(i);
        }
    }
}

