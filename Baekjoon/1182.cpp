#include <iostream>
#include <algorithm>

using namespace std;

int N, S, cnt = 0;
int *arr;

void check(int n, int sum)
{
    sum += arr[n];
    if (n == N)
        return;
    if (sum == S)
    {
        cnt++;
    }
    check(n + 1, sum - arr[n]);
    check(n + 1, sum);
}

int main(void)
{
    scanf("%d %d", &N, &S);
    arr = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        scanf("%d", arr + i);

    sort(arr, arr + N);
    check(0, 0);
    printf("%d\n", cnt);

    return 0;
}