#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main(void)
{
    int N;
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", arr + i);
    }

    for (int i = 1; i < N; i++)
    {
        int gcdv = gcd(arr[0], arr[i]);
        printf("%d/%d\n", arr[0] / gcdv, arr[i] / gcdv);
    }

    return 0;
}