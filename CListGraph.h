#ifndef GRAPHINTERFACE_CLISTGRAPH_H
#define GRAPHINTERFACE_CLISTGRAPH_H

#include "GeneralGraphInterface.h"

typedef std::vector<std::vector<int> > AdjList;

class CListGraph : public IGraph {
public:
    CListGraph(int);

    CListGraph(const IGraph *);

    virtual void AddEdge(int, int);

    virtual int VerticesCount() const;

    virtual void GetNextVertices(int, std::vector<int> &) const;

    virtual void GetPrevVertices(int, std::vector<int> &) const;

    ~CListGraph();

private:
    AdjList adj_list;
    int vertice_count;
};

#endif //GRAPHINTERFACE_CLISTGRAPH_H
