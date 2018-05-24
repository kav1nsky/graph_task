#ifndef GRAPHINTERFACE_CMATRIXGRAPH_H
#define GRAPHINTERFACE_CMATRIXGRAPH_H

#include "GeneralGraphInterface.h"
#include "CListGraph.h"

typedef std::vector<std::vector<int> > MatrixVector;

class CMatrixGraph : public IGraph {
public:
    CMatrixGraph(int);

    CMatrixGraph(const IGraph *);

    virtual void AddEdge(int, int);

    virtual int VerticesCount() const;

    virtual void GetNextVertices(int, std::vector<int> &) const;

    virtual void GetPrevVertices(int, std::vector<int> &) const;

    ~CMatrixGraph();

private:
    MatrixVector matrix;
    int vertice_count;
};

#endif //GRAPHINTERFACE_CMATRIXGRAPH_H
