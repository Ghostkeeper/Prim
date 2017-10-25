#include <cmath>

#include "Point.h"

Point::Point(const int x, const int y) : x(x), y(y) {
    //Just store X and Y.
}

unsigned int Point::distance(const Point other) const {
    const int delta_x = x - other.x;
    const int delta_y = y - other.y;
    return std::sqrt(delta_x * delta_x + delta_y * delta_y);
}