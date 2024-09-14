//structure 4
#include <stdio.h>
#include <math.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1, p2;

    printf("Enter the coordinates of Point 1:\n");
    printf("x-coordinate: ");
    scanf("%d", &p1.x);
    printf("y-coordinate: ");
    scanf("%d", &p1.y);

    printf("\nEnter the coordinates of Point 2:\n");
    printf("x-coordinate: ");
    scanf("%d", &p2.x);
    printf("y-coordinate: ");
    scanf("%d", &p2.y);


    int deltaX = p2.x - p1.x;
    int deltaY = p2.y - p1.y;
    double distance = sqrt(deltaX * deltaX + deltaY * deltaY);

    printf("\nDistance between the two points: %.2f\n", distance);

    return 0;
}


