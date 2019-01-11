#include <iostream>

using namespace std;

int main(void)
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (A == 60 && B == 60 && C == 60)
        printf("Equilateral\n");
    else if (A + B + C == 180)
    {
        if (A == B || B == C || C == A)
            printf("Isosceles\n");
        else
            printf("Scalene\n");
    }
    else
        printf("Error\n");

    return 0;
}