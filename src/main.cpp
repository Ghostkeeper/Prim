#include <iostream>

#include "Point.h"

int main(int num_arguments, char** arguments) {
	std::cout << "Distance from (0,0) to (10,10) is " << Point(0, 0).distance(Point(10, 10)) << "." << std::endl;
	return 0;
}