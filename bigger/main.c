#include <stdio.h>
#include "point.h"
#include "triangle.h"

int main() {
    Point a, b, c, d, e;

    point_initialize(&a, -2, -1.5);
    point_initialize(&b, -3, 5);
    point_initialize(&c, 3, 6.4);
    point_initialize(&d, 0.0, 0.0);
    point_initialize(&e, 4.1, -4.1);

    Triangle t1, t2;

    triangle_init(&t1, &a, &b, &c);
    triangle_init(&t2, &a, &d, &e);

    printf("t1 perimeter: %f\n", triangle_perimeter(&t1));
    printf("t2 perimater: %f\n", triangle_perimeter(&t2));
    printf("t1 area: %f\n", triangle_area(&t1));
    printf("t2 area: %f\n", triangle_area(&t2));

    printf("Is point a the origin: %s\n", (point_is_origin(&a)) ? "yes" : "no");
    printf("Is point d the origin: %s\n", (point_is_origin(&d)) ? "yes" : "no");
}


