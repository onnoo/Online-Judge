#include <iostream>

using namespace std;

int main(void)
{
    double N, M, B;
    while (scanf("%lf %lf %lf", &N, &B, &M) != EOF)
    {
        B /= 100;
        B += 1;
        int count = 0;
        while (N < M)
        {
            N *= B;
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}