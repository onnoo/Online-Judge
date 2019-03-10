#include <iostream>

using namespace std;

int main(void)
{
    int N, K;
    scanf("%d %d", &N, &K);

    int idx = 1;
    int divider = 0;
    while (idx <= K && divider <= N)
    {
        divider++;
        if (N % divider == 0)
            idx++;
    }
    if (divider > N)
        printf("0\n");
    else
        printf("%d\n", divider);

    return 0;
}