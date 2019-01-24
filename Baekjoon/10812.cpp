#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);
    int *arr = (int *)malloc(sizeof(int) * N);
    int *tmp;

    for (int i = 0; i < N; i++)
        arr[i] = i + 1;

    while (M--)
    {
        int i, j, k, t;
        scanf("%d %d %d", &i, &j, &k);
        i--;
        j--;
        k--;
        tmp = (int *)malloc(sizeof(int) * (j - i + 1));

        for (t = 0; t < j - i + 1; t++)
            tmp[t] = arr[i + t];
        rotate(tmp, tmp + (k - i), tmp + (j - i + 1));
        for (t = 0; t < j - i + 1; t++)
            arr[i + t] = tmp[t];

        free(tmp);
    }
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}