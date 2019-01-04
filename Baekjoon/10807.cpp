#include <iostream>

using namespace std;

int main(void)
{
    int N, V;

    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", arr + i);
    }

    scanf("%d", &V);

    int count = 0;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] == V)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}