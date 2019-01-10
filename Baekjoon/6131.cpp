#include <iostream>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    int A = 1, B = 1;
    int count = 0;

    while (A * A - (A - 1) * (A - 1) <= N)
    {
        if (A * A - B * B == N)
            count++;
        if (B == 1)
        {
            A++;
            B = A;
        }
        else
        {
            B--;
        }
    }

    printf("%d\n", count);

    return 0;
}