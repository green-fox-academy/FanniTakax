#include <stdio.h>

// Write a function called "GetSurface" that takes a RectangularCuboid
// and returns it's surface
// Write a function called "GetVolume" that takes a RectangularCuboid
// and returns it's volume

struct rectangular_cuboid {
    double a;
    double b;
    double c;
};

double get_volume(struct rectangular_cuboid cuboid)
{
    double volume = (cuboid.a * cuboid.b * cuboid.c);
    return volume;
}

double get_surface(struct rectangular_cuboid cuboid)
{
    double surface = (cuboid.a * cuboid.b * 2 + cuboid.a * cuboid.c * 2 + cuboid.b * cuboid.c * 2);
    return surface;
}

int main()
{
    struct rectangular_cuboid cuboid1;
    cuboid1.a = 6;
    cuboid1.b = 4;
    cuboid1.c = 2;

    printf("Volume of the cuboid: %.1f\n", get_volume(cuboid1));
    printf("Surface of the cuboid: %.1f\n", get_surface(cuboid1));


    return 0;
}
