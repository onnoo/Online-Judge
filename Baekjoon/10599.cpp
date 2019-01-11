#include <iostream>
using namespace std;

int main(void)
{
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    while (!(A == 0 && B == 0 && C == 0 & D == 0))
    {
        printf("%d %d\n", C - B, D - A);
        scanf("%d %d %d %d", &A, &B, &C, &D);
    }

    return 0;
}