#include <sstream> //For stringstream.

#include "MinimumSpanningTree.h"

MinimumSpanningTree::Edge::Edge(Point& start, Point& end) : start(start), end(end) {
    //Just store the two endpoints.
}

int MinimumSpanningTree::Edge::length() {
    return start.distance(end);
}

MinimumSpanningTree::MinimumSpanningTree(const std::vector<Point> vertices) : vertices(vertices) {
    //TODO: Compute the edges of the tree.
}

std::string MinimumSpanningTree::toSVG() {
    std::stringstream result;

    //Header.
    result << "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 100 100\">\n";

    //TODO: Draw edges.

    //Draw every vertex as a circle.
    for(Point vertex : vertices) {
        result << "\t<circle cx=\"" << vertex.x << "\" cy=\"" << vertex.y << "\" r=\"1\" />\n";
    }

    //Footer.
    result << "</svg>";

    return result.str();
}