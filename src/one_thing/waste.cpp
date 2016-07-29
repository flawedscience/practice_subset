#include <iostream>
#include <math.h>

int main(int argc, char** argv)
{
    double x = 0.0;
    while (true) {
        for (double a = 0; a < 1e6; a+=1e-6) {
            x = sin(a);
            x = cos(x);
        }
    }
    return 0;
}

