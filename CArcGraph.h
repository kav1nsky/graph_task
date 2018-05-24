#ifndef GRAPHINTERFACE_CARCGRAPH_H
#define GRAPHINTERFACE_CARCGRAPH_H

#include "GeneralGraphInterface.h"

typedef std::vector<std::pair<int, int>> ArcVector;

class CArcGraph : IGraph {
public:
    CArcGraph(int);

    CArcGraph(const IGraph *);

    virtual void AddEdge(int, int);

    virtual int VerticesCount() const;

    virtual void GetNextVertices(int, std::vector<int> &) const;

    virtual void GetPrevVertices(int, std::vector<int> &) const;

    ~CArcGraph();

private:
    ArcVector arc_list;
    int vertice_count;
};


#endif //GRAPHINTERFACE_CARCGRAPH_H
