#include <iostream>

using namespace std;

int main(void)
{
    int N;
    int div = 2;

    scanf("%d", &N);

    while (N != 1)
    {
        if (N % div == 0)
        {
            printf("%d\n", div);
            N = N / div;
        }
        else
        {
            div++;
        }
    }

    return 0;
}