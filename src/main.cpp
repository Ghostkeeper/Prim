#include <iostream>
#include <vector>

#include "MinimumSpanningTree.h"
#include "Point.h"

int main(int num_arguments, char** arguments) {
    std::vector<Point> vertices;
    //Some sample data to test with.
    vertices.push_back(Point(10, 10));
    vertices.push_back(Point(90, 90));
    vertices.push_back(Point(10, 90));
    vertices.push_back(Point(90, 10));
    vertices.push_back(Point(45, 45));

	MinimumSpanningTree tree(vertices);

    std::cout << tree.toSVG(); //Be sure to pipe this to a file.
	return 0;
}