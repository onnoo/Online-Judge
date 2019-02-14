#include <iostream>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    int arr[N + 1];

    for (int i = 0; i <= N; i++)
    {
        if (i == 0)
            arr[i] = 0;
        else if (i == 1)
            arr[i] = 1;
        else
            arr[i] = arr[i - 1] + arr[i - 2];
    }

    printf("%d\n", arr[N]);

    return 0;
}