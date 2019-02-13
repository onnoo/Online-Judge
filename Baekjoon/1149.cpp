#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);
    int arr[3] = {0, 0, 0};
    int tmp[3];
    int cost[3];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%d", cost + j);
        for (int j = 0; j < 3; j++)
        {
            if (arr[(j + 1) % 3] > arr[(j + 2) % 3])
                tmp[j] = cost[j] + arr[(j + 2) % 3];
            else
                tmp[j] = cost[j] + arr[(j + 1) % 3];
        }
        for (int j = 0; j < 3; j++)
            arr[j] = tmp[j];
    }

    printf("%d\n", *min_element(arr, arr + 3));

    return 0;
}