#include <iostream>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    long long arr[N];

    for (int i = 0; i < N; i++)
    {
        if (i < 3)
            arr[i] = 1;
        else
            arr[i] = arr[i - 1] + arr[i - 3];
    }

    printf("%lld", arr[N - 1]);

    return 0;
}