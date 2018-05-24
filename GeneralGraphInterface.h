//
// Created by paavo on 2/7/18.
//
#include <vector>

#ifndef GRAPHINTERFACE_GENERALGRAPHINTERFACE_H
struct IGraph {
    virtual ~IGraph() {}

    // Добавление ребра от from к to.
    virtual void AddEdge(int from, int to) = 0;

    virtual int VerticesCount() const  = 0;

    virtual void GetNextVertices(int vertex, std::vector<int>& vertices) const = 0;
    virtual void GetPrevVertices(int vertex, std::vector<int>& vertices) const = 0;
};

#define GRAPHINTERFACE_GENERALGRAPHINTERFACE_H

#endif //GRAPHINTERFACE_GENERALGRAPHINTERFACE_H
