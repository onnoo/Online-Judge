#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    int n;
    int arr[3] = {0, 0, 0};
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%d", arr + j);
        sort(arr, arr + 3);
        printf("Scenario #%d:\n", i);
        if (pow(arr[2], 2) == pow(arr[1], 2) + pow(arr[0], 2))
            printf("yes\n");
        else
            printf("no\n");
        if (i != n)
            printf("\n");
    }

    return 0;
}