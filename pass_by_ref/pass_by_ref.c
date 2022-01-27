#include <stdio.h>
#include <math.h>

struct Point {
    double x;
    double y;
};


double point_distance(struct Point *p1, struct Point *p2);
struct Point find_midpoint(struct Point *p1, struct Point *p2);

int main() {

    struct Point a;
    struct Point b;

    a.x = 0;
    a.y = 0;
    b.x = 5;
    b.y = 5;

    double distance = point_distance(&a, &b);

    struct Point midpoint = find_midpoint(&a, &b);

    printf("Distance between a and b: %f\n", distance);
    printf("Midpoint between a and b: (%f, %f)\n", 
            midpoint.x, midpoint.y);
}

double point_distance(struct Point *p1, struct Point *p2) {
    double dx = p1->x - p2->x;
    double dy = p1->y - p2->y;

    return sqrt(dx*dx+dy*dy);
}

struct Point find_midpoint(struct Point *p1, struct Point *p2) {
    struct Point mid;

    mid.x = (p1->x+p2->x)/2.0;
    mid.y = (p1->y+p2->y)/2.0;

    return mid;
}

