#include <iostream>

using namespace std;

int main(void)
{
    for (int a = 2; a <= 100; a++)
        for (int b = 2; b < a; b++)
            for (int c = b + 1; c < a; c++)
                for (int d = c + 1; d < a; d++)
                    if (a * a * a == b * b * b + c * c * c + d * d * d)
                        printf("Cube = %d, Triple = (%d,%d,%d)\n", a, b, c, d);

    return 0;
}