#include <iostream>

using namespace std;

int main(void)
{
    int N, tmp, count = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        tmp = N;
        for (int j = 1; j <= i && tmp >= i; j++, tmp -= i)
            count++;
    }
    printf("%d\n", count);

    return 0;
}