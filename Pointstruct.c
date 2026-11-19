#include <stdio.h>
#include <math.h>

struct Point {
        int x;
        int y;
};

int main()
{
    struct Point p1, p2;
    double distance;
    printf("Enter the cordinates of first point (x,y) : ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Enter the cordinates of Second point (x,y) : ");
    scanf("%d %d", &p2.x, &p2.y);
    distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    printf("The distance between the points is %lf", distance);

    return 0;
}