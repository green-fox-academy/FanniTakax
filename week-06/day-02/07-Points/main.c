#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Create a point struct which has two float variables: x and y
Create a function that constructs a point
It should take it's x and y coordinate as parameter
Create a function that takes 2 points and returns the distance between them
Example:
int main()
{
	point_t p1 = create_point(1, 1);
	point_t p2 = create_point(1, 5.5);
	float dist = distance(p1, p2);
	printf("%f", dist);
	return 0;
}
*/
typedef struct point{
    float x;
    float y;
}point_t;

point_t create_point(float x, float y)
{
    point_t p;
    p.x = x;
    p.y = y;
    return p;
}

double distance(point_t p1, point_t p2)
{
    double dist_squared = ((p1.x - p2.x)*(p1.x - p2.x) + ((p1.y - p2.y)*(p1.y - p2.y)));
    return sqrt(dist_squared);
}


int main()
{
    point_t p1 = create_point(1, 1);
    point_t p2 = create_point(1, 5.5);

    printf("x1: %.1f, y1: %.1f\n", p1.x, p1.y);
    printf("x2: %.1f, y2: %.1f\n", p2.x, p2.y);

    double dist = distance(p1, p2);

    printf("The distance between the two points is %.2f\n", dist);

    return 0;
}