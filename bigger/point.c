#include <math.h>
#include "point.h"

void point_initialize(Point *p, double x, double y) {
    p->x = x;
    p->y = y;
    return;
}

double point_distance(const Point *p1, const Point *p2) {
    double dx = p1->x - p2->x;
    double dy = p1->y - p2->y;

    return sqrt(dx*dx+dy*dy);
}

int point_is_origin(const Point *p) {
    return ((fabs(p->x) < POINT_ORIGIN_TEST_EPSILON) &&
            (fabs(p->y) < POINT_ORIGIN_TEST_EPSILON));
}

Point *point_clone(const Point *src, Point *dst) {
    dst->x = src->x;
    dst->y = src->y;
    return dst;
}

