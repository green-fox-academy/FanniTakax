#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} computer_t;

typedef struct Notebook{
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} notebook_t;

int main()
{
    notebook_t myPC;
    myPC.cpu_speed_GHz = 3.2;
    myPC.ram_size_GB = 8;
    myPC.bits = 64;

     struct Computer thisPC;
     thisPC.cpu_speed_GHz = 2.5;
     thisPC.ram_size_GB = 8;
     thisPC.bits = 32;

     printf("My computer's cpu speed is %.1f GHz, its RAM size is %d GB and it has %d bits.\n", myPC.cpu_speed_GHz, myPC.ram_size_GB, myPC.bits);
     printf("This computer's cpu speed is %.1f GHz, its RAM size is %d GB and it has %d bits.\n", thisPC.cpu_speed_GHz, thisPC.ram_size_GB, thisPC.bits);

    return 0;
}