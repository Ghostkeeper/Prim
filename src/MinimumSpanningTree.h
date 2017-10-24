#ifndef MINIMUMSPANNINGTREE_H
#define MINIMUMSPANNINGTREE_H

#include <vector>

#include "Point.h"

/**
 * Implements Prim's algorithm to compute Minimum Spanning Trees.
 */
class MinimumSpanningTree {
public:
    /**
     * Constructs a minimum spanning tree for the complete graph between the
     * given vertices.
     * @param points The vertices of the graph that must be connected via a
     * minimum spanning tree.
     */
    MinimumSpanningTree(const std::vector<Point> points);
};

#endif /* MINIMUMSPANNINGTREE_H */