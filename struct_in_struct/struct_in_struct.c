#include <stdio.h>
#include <math.h>

struct Point {
    double x;
    double y;
};

struct Line {
    struct Point start;
    struct Point end;
};

double line_length(const struct Line *l);
double point_distance(const struct Point *p1, const struct Point *p2);
struct Point find_midpoint(const struct Point *p1, const struct Point *p2);

int main() {

    struct Line here_to_there;

    here_to_there.start.x = 0;
    here_to_there.start.y = 0;
    here_to_there.end.x = 5;
    here_to_there.end.y = 5;

    double line_length = point_distance(&(here_to_there.start), &(here_to_there.end));

    struct Point midpoint = find_midpoint(&(here_to_there.start), &(here_to_there.end));

    printf("Line length: %f\n", line_length);
    printf("Line midpoint: (%f, %f)\n", 
            midpoint.x, midpoint.y);
}

double point_distance(const struct Point *p1, const struct Point *p2) {
    double dx = p1->x - p2->x;
    double dy = p1->y - p2->y;

    return sqrt(dx*dx+dy*dy);
}

struct Point find_midpoint(const struct Point *p1, const struct Point *p2) {
    struct Point mid;

    mid.x = (p1->x+p2->x)/2.0;
    mid.y = (p1->y+p2->y)/2.0;

    return mid;
}

double line_length(const struct Line *l) {
    return point_distance(&(l->start), &(l->end));
}

