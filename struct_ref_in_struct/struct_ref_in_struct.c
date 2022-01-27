#include <stdio.h>
#include <math.h>

struct Point {
    double x;
    double y;
};

struct Line {
    struct Point *start;
    struct Point *end;
};

double line_length(const struct Line *l);
double point_distance(const struct Point *p1, const struct Point *p2);
struct Point find_midpoint(const struct Point *p1, const struct Point *p2);

int main() {

    struct Point a;
    struct Point b;
    struct Point c;

    a.x = 0;
    a.y = 0;

    b.x = 5;
    b.y = 5;

    c.x = 10;
    c.y = 0;

    struct Line a_to_b;
    struct Line b_to_c;
    struct Line c_to_a;

    a_to_b.start = &a;
    a_to_b.end = &b;

    b_to_c.start = &b;
    b_to_c.end = &c;

    c_to_a.start = &c;
    c_to_a.end = &a;

    printf("A to B line length: %f\n", line_length(&a_to_b));
    printf("B to C line length: %f\n", line_length(&b_to_c));
    printf("C to A line length: %f\n", line_length(&c_to_a));
}

double point_distance(const struct Point *p1, const struct Point *p2) {
    double dx = p1->x - p2->x;
    double dy = p1->y - p2->y;

    return sqrt(dx*dx+dy*dy);
}

double line_length(const struct Line *l) {
    return point_distance(l->start, l->end);
}

