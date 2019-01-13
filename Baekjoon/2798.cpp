#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int *arr;
int result = 0;

void check(int sum, int d, int idx)
{
    if (d == 3 && sum > result)
    {
        result = sum;
    }
    else if (d < 3)
    {
        for (int i = idx; i < N; i++)
        {
            int tmp = sum + arr[i];
            if (tmp <= M)
            {
                check(tmp, d + 1, i + 1);
            }
        }
    }
}

int main(void)
{

    scanf("%d %d", &N, &M);

    arr = (int *)malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
        scanf("%d", arr + i);

    check(0, 0, 0);

    printf("%d\n", result);

    return 0;
}