#ifndef MINIMUMSPANNINGTREE_H
#define MINIMUMSPANNINGTREE_H

#include <string>
#include <vector>

#include "Point.h"

/**
 * Implements Prim's algorithm to compute Minimum Spanning Trees.
 */
class MinimumSpanningTree {
public:
    /**
     * The points of this graph that must be connected with a minimum spanning
     * tree.
     */
    std::vector<Point> vertices;

    /**
     * Constructs a minimum spanning tree for the complete graph between the
     * given vertices.
     * @param vertices The vertices of the graph that must be connected via a
     * minimum spanning tree.
     */
    MinimumSpanningTree(const std::vector<Point> vertices);

    /**
     * Renders this tree in an SVG image for debugging purposes. Be sure to
     * output the result to a file.
     * Because this is for debugging purposes only, this only visualises the
     * part of the graph that is within the [0, 0] to [100, 100] square of
     * coordinates.
     * @return The source code of an SVG file that visualises this graph
     * roughly.
     */
    std::string toSVG();
};

#endif /* MINIMUMSPANNINGTREE_H */