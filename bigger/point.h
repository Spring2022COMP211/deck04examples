#ifndef POINT_H
#define POINT_H

struct Point {
    double x;
    double y;
};

typedef struct Point Point;

#define POINT_ORIGIN_TEST_EPSILON 0.00001

void point_initialize(Point *p, double x, double y);
double point_distance(const Point *p1, const Point *p2);
int point_is_origin(const Point *p);
Point *point_clone(const Point *src, Point *dst);

#endif
