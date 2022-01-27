#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    
    struct Point a;
    struct Point b;

    a.x = 4;
    a.y = 3;
    b.x = 10;
    b.y = -9;

    printf("a: (%d,%d)\n", a.x, a.y);
    printf("b: (%d,%d)\n", b.x, b.y);

    printf("A struct Point is %ld bytes in size.\n", sizeof(struct Point));

}

