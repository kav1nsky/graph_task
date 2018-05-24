#ifndef GRAPHINTERFACE_CSETGRAPH_H
#define GRAPHINTERFACE_CSETGRAPH_H

#include "GeneralGraphInterface.h"
#include <set>

typedef std::vector<std::set<int> > AdjSet;

class CSetGraph : public IGraph {
public:
    CSetGraph(int);

    CSetGraph(const IGraph *);

    virtual void AddEdge(int, int);

    virtual int VerticesCount() const;

    virtual void GetNextVertices(int, std::vector<int> &) const;

    virtual void GetPrevVertices(int, std::vector<int> &) const;

    ~CSetGraph();

private:
    AdjSet adj_set;
    int vertice_count;
};

#endif //GRAPHINTERFACE_CSETGRAPH_H
