#include <iostream>
#include <vector>

using namespace std;

int N;
int *arr;
vector<int> v(6);

void print_lotto(int count, int idx)
{
    if (count == 0)
    {
        for (int i = 0; i < 6; i++)
            printf("%d ", v[i]);
        printf("\n");
    }
    else
    {
        for (int i = idx; i <= N - count; i++)
        {
            v[6 - count] = arr[i];
            print_lotto(count - 1, i + 1);
        }
    }
}

int main(void)
{
    scanf("%d", &N);
    while (N != 0)
    {
        arr = (int *)malloc(sizeof(int) * N);
        for (int i = 0; i < N; i++)
            scanf("%d", arr + i);
        print_lotto(6, 0);
        printf("\n");
        free(arr);
        scanf("%d", &N);
    }
    return 0;
}