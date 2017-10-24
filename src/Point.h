#ifndef POINT_H
#define POINT_H

/**
 * A class to represent a 2-dimensional point.
 */
class Point {
public:
    /**
     * The X position of the point.
     */
    int x;

    /**
     * The Y position of the point.
     */
    int y;

    /**
     * Constructs a new point.
     * @param x The X position of the new point.
     * @param y The Y position of the new point.
     */
    Point(const int x, const int y);

    /**
     * Computes the distance to another point.
     * @param other The point to compute the distance to.
     * @return The distance to the other point.
     */
    unsigned int distance(const Point other);
};

#endif /* POINT_H */