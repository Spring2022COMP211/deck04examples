#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "point.h"

struct Triangle {
    const Point *a;
    const Point *b;
    const Point *c;
};

typedef struct Triangle Triangle;

void triangle_init(Triangle *t, const Point *a, const Point *b, const Point *c);
double triangle_perimeter(const Triangle *t);
double triangle_area(const Triangle *t);
Triangle *triangle_clone(const Triangle *src, Triangle *dst);

#endif
